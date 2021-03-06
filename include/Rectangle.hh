#pragma once
#include<SFML/Graphics.hpp>

class Rectangle
{
private:
    sf::RectangleShape* rectangleshape{};
    
public:
    Rectangle(int w, int h, int x, int y, sf::Color color);
    ~Rectangle();
    sf::RectangleShape* GetShape() const;

};


