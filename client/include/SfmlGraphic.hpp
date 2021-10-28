/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** sfmlWindow
*/

#ifndef _SFML_GRAPHIC_
# define _SFML_GRAPHIC_

# include <string>
# include <memory>
# include <vector>
# include <SFML/Graphics.hpp>
# include "IGraphic.hpp"
# include "Entity.hpp"

class SfmlGraphic : public IGraphic
{
public:
  SfmlGraphic();
  ~SfmlGraphic();
    
  void		init(int width, int height, const std::string& name);
  bool		isOpen() const;
  void		clear();
  void		drawEntity(const Sprite& data, std::shared_ptr<sf::Sprite> s);
  
  void		display(const std::vector<std::shared_ptr<Entity>>& entities);
  void		close();

private:
    std::unique_ptr<sf::RenderWindow>    window;

};


#endif /* _SFML_GRAPHIC_ */
