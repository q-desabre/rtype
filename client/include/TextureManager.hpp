

#ifndef _TEXTURE_MANAGER_
# define _TEXTURE_MANAGER_

# include "ESprite.hpp"
# include <SFML/Graphics.hpp>
# include <memory>
# include <map>

class	TextureManager
{
public:
  static TextureManager		&getInstance()
  {
    static TextureManager	tm;
    return (tm);
  }

  std::shared_ptr<sf::Texture>	getTexture(ESprite tag)
  {
    return (textures[tag]);
  }  
  
private:
  TextureManager()
  {
    addTexture(ESprite::BACKGROUND, "../assets/background.png");
  }

  void			addTexture(ESprite tag, const std::string & path)
  {
    this->textures[tag] = std::make_shared<sf::Texture>();
    this->textures[tag]->loadFromFile(path);
  }

  
  std::map<ESprite, std::shared_ptr<sf::Texture>>	textures;
};

#endif /* _TEXTURE_MANAGER_ */
