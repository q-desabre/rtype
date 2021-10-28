/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** IGraphic
*/

#ifndef _IGRAPHIC_
# define _IGRAPHIC_

# include "Entity.hpp"
# include <memory>
# include <vector>
# include <string>

class IGraphic
{
public:
  virtual void        init(int width, int height, const std::string& name) = 0;
  virtual bool        isOpen() const = 0;
  virtual void        clear() = 0;
  virtual void        display(const std::vector<std::shared_ptr<Entity>>&) = 0;
  virtual void        close() = 0;
};


#endif /* _IGRAPHIC */
