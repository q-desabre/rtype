/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** sfmlWindow
*/

#include "SfmlWindow.hpp"

SfmlWindow::SfmlWindow(int width, int height, const std::string& name)
{
    this->init(width, height, name);
}

SfmlWindow::~SfmlWindow()
{

}

void        SfmlWindow::init(int width, int height, const std::string& name)
{
    this->window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width, height),
                                                      name.c_str());
}

bool        SfmlWindow::isOpen() const
{
    return (this->window->isOpen());
}

void        SfmlWindow::close()
{

}

void        SfmlWindow::display()
{
    sf::Texture texture;
    texture.loadFromFile("../abc.jpg");
    sf::Sprite sprite(texture);
    sprite.setPosition(sf::Vector2f{10, 10});
    this->window->draw(sprite);
    this->window->display();
}

void        SfmlWindow::clear()
{
    this->window->clear();
}
