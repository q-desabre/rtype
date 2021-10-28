
#ifndef _POSITION_
# define _POSITION_

class Position
{
public:
  Position();
  Position(const Position&);
  Position(float _x, float _y);
  ~Position();
  Position &operator=(const Position&);

  float		getX() const;
  float		getY() const;
  void		setX(float _x);
  void		setY(float _y);
  
private:
  float		x;
  float		y;
};

#endif /* _POSITION_ */
