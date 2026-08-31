#include <SFML/Graphics.hpp>
#include <vector>

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
    std::vector<double> position{0.0 , 0.0};
    std::vector<int> size{100,100};
    std::vector<double> velocity{0.0, 0.0};
    bool isAlive{false};

    void movement();
    void jumping();

public:

    


};