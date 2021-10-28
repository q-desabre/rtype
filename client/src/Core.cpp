
#include "Core.hpp"
#include "SfmlGraphic.hpp"
#include "Rtype.hpp"

Core::Core()
{
}

Core::~Core()
{

}

void		Core::init()
{
  graphic = std::make_unique<SfmlGraphic>();
  game = std::make_unique<Rtype>();
  graphic->init(1024, 768, "Rtype");
  game->init();
  
}

void		Core::run()
{
  isRunning = true;
  while (isRunning && graphic->isOpen()) {
    game->update(); // clock TODO
    // update network
    graphic->clear();
    graphic->display(game->getEntities());
  }
}

void		Core::stop()
{
  isRunning = false;
}
