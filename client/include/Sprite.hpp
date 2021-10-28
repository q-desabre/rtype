
#ifndef _SPRITE_
# define _SPRITE_

# include "ESprite.hpp"
# include "Position.hpp"

class Sprite
{
public:
  Sprite(ESprite t);
  Sprite(ESprite t, const Position& p);
  ~Sprite();

  void			setPosition(const Position& pos);
  void			setPosition(float x, float y);
  ESprite		getTag() const;
  const	Position &	getPosition() const;
  
protected:
  ESprite	tag;
  Position	pos;
};

#endif /* _SPRITE_ */
