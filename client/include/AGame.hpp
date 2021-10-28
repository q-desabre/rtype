
#ifndef _AGAME_
# define _AGAME_

# include "Entity.hpp"
# include <memory>
# include <vector>

class	AGame
{
public:
  virtual void		init() = 0;
  virtual void		update() = 0;

  void			addEntity(std::shared_ptr<Entity> e)
  {
    entities.push_back(e);
  }
  
  std::vector<std::shared_ptr<Entity>>&	getEntities()
  {
    return (entities);
  }
  
  protected:
  std::vector<std::shared_ptr<Entity>>	entities;
};


#endif /* _AGAME_ */
