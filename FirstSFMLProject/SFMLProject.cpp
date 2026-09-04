#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <windows.h>
#include <cmath>

const double g = 9.81;

int main()
{
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "My Version of Level Devil!");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.display();
    }
}

class Player{
private:
    std::vector<int> size{5,5};
    std::vector<double> position{0.0, 0.0};
    std::vector<double> velocity{0.0, 0.0};
    std::vector<double> acceleration{0.0, 0.0};
    double jump_displacement{0.0};
    bool isAlive{false};
    bool isJumping{false};
    bool isMoving{false};

    void movement();
    void jumping(bool isWPressed, bool isAPressed, bool isDPressed);

public:

    void update(double deltaTime);
    void setPosition(double x, double y);
    void setVelocity(double x, double y);
    void setAcceleration(double x, double y);
    std::vector<double> getPosition();
    std::vector<double> getVelocity();
    std::vector<double> getAcceleration();
};

void Player::update(double deltaTime){
    if(isJumping){
        double original_p_H = getPosition()[1];
        auto new_v_H = getVelocity()[1] + getAcceleration()[1] * deltaTime;
        auto new_p_H = (getVelocity()[1] * deltaTime) + (0.5 * getAcceleration()[1] * pow(deltaTime, 2));
        setVelocity(getVelocity()[0], new_v_H);
        setPosition(getVelocity()[0] * deltaTime, new_p_H);
        if(getVelocity()[1] == 0.0){
            setAcceleration(0.0, g);
        }
        if(getPosition()[1] == original_p_H){
            setVelocity(0.0, 0.0);
            setAcceleration(0.0, 0.0);
            isJumping = false;
        }
    }
}

void Player::jumping(bool isWPressed, bool isAPressed, bool isDPressed){
    setAcceleration(0.0, -1*g);
    if(isWPressed){
        setVelocity(0.0, 3.0);
    }
    else if(isWPressed && isAPressed){
        setVelocity(-2.5, 3.0);
    }
    else if(isWPressed && isDPressed){
        setVelocity(2.5, 3.0);
    }
    isJumping = true;
}

std::vector<double> Player::getPosition(){
    return position;
}

std::vector<double> Player::getVelocity(){
    return velocity;
}

std::vector<double> Player::getAcceleration(){
    return acceleration;
} 

void Player::setPosition(double x, double y){
    position[0] = x;
    position[1] = y;
}

void Player::setVelocity(double x, double y){
    velocity[0] = x;
    velocity[1] = y;
}

void Player::setAcceleration(double x, double y){
    acceleration[0] = x;
    acceleration[1] = y;
}