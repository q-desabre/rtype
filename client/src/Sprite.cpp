
#include "Sprite.hpp"

Sprite::Sprite(ESprite t) : tag(t)
{

}

Sprite::Sprite(ESprite t, const Position& p) : tag(t), pos(p)
{

}

Sprite::~Sprite()
{

}

void		Sprite::setPosition(const Position& p)
{
  pos = p;
}

void		Sprite::setPosition(float x, float y)
{
  pos.setX(x);
  pos.setY(y);
}

ESprite		Sprite::getTag() const
{
  return tag;
}

const Position&	Sprite::getPosition() const
{
  return pos;
}
