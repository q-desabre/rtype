

#ifndef _SPRITE_MANAGER_
# define _SPRITE_MANAGER_

# include "ESprite.hpp"
# include "TextureManager.hpp"
# include <SFML/Graphics.hpp>
# include <memory>
# include <map>

class		SpriteManager
{
public:
  static SpriteManager		&getInstance()
  {
    static SpriteManager	sm;
    return (sm);
  }

  std::shared_ptr<sf::Sprite>	getSprite(ESprite tag)
  {
    return sprites[tag];
  }
  
private:
  SpriteManager()
  {
    addSprite(BACKGROUND);
  }

  void		addSprite(ESprite tag)
  {
    this->sprites[tag] = std::make_shared<sf::Sprite>(*TextureManager::getInstance().getTexture(tag));
  }
  
  std::map<ESprite, std::shared_ptr<sf::Sprite>>	sprites;
};



#endif /* _SPRITE_MANAGER_ */
