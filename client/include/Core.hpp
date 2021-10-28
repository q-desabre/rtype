
#ifndef _CORE_
# define _CORE_

# include "IGraphic.hpp"
# include "AGame.hpp"

class Core
{
public:
  Core();
  ~Core();

  void		init();
  void		run();
  void		stop();
  
private:
  bool				isRunning;
  std::unique_ptr<IGraphic>	graphic;
  std::unique_ptr<AGame>	game;
};


#endif /* _CORE_ */
