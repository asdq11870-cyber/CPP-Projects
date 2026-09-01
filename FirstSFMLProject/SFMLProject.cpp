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
    bool isAlive{false};

    void movement();
    void jumping(bool isWPressed, bool isAPressed, bool isDPressed);

public:

    void update();

};

void Player::movement(){

}

void Player::jumping(bool isWPressed, bool isAPressed, bool isDPressed){
    double theta = 0;
    int dt = 1;
    if(isWPressed){
        double neg_g = g * -1;
        double s_vert = 0.5 * neg_g * std::pow(dt, 2);
        double s_horz = 0;
    }
    else if(isAPressed && isWPressed){
        theta = 45;
        double v_vert = 
    }
}