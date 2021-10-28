
#include "Entity.hpp"

Entity::Entity() : sprite(BACKGROUND, Position(100, 100))
{
  
}

Entity::~Entity()
{

}

const Sprite&		Entity::getSprite() const
{
  return sprite;
}
