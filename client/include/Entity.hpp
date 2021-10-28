
#ifndef _ENTITY_
# define _ENTITY_

# include "Sprite.hpp"

class	Entity
{
public:
  Entity();
  ~Entity();

  const	Sprite&		getSprite() const;
  
private:
  Sprite	sprite;
};

#endif /* _ENTITY_ */
