/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** sfmlGraphic
*/

#include "SfmlGraphic.hpp"
#include "SpriteManager.hpp"

SfmlGraphic::SfmlGraphic()
{
}

SfmlGraphic::~SfmlGraphic()
{

}

void		SfmlGraphic::init(int width, int height, const std::string& name)
{
    this->window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width, height),
                                                      name.c_str());
}

bool		SfmlGraphic::isOpen() const
{
    return (this->window->isOpen());
}

void		SfmlGraphic::close()
{

}

void		SfmlGraphic::drawEntity(const Sprite& data, std::shared_ptr<sf::Sprite> s)
{
  s->setPosition(data.getPosition().getX(), data.getPosition().getY());
  this->window->draw(*s);
}

void		SfmlGraphic::display(const std::vector<std::shared_ptr<Entity>>& entities)
{
  clear();
  // loop on all Entity
  // use pool of sprite by id ?
  for (int i = 0; i != entities.size(); i++) {
    drawEntity(entities[i]->getSprite(),
	       SpriteManager::getInstance().getSprite(entities[i]->getSprite().getTag()));
  }
  this->window->display();
}

void        SfmlGraphic::clear()
{
    this->window->clear();
}
