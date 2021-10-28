
#include "Position.hpp"

Position::Position() : x(0), y(0)
{

}

Position::Position(const Position& p2) : x(p2.x), y(p2.y)
{

}

Position::Position(float _x, float _y) : x(_x), y(_y)
{

}

Position	&Position::operator=(const Position& pos)
{
  this->x = pos.x;
  this->y = pos.y;
  return *(this);
}

Position::~Position()
{

}

float		Position::getX() const
{
  return (this->x);
}

float		Position::getY() const
{
  return (this->y);
}

void		Position::setX(float _x)
{
  x = _x;
}

void		Position::setY(float _y)
{
  _y = y;
}
