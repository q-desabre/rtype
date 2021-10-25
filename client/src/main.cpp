
#include "SfmlWindow.hpp"

int		main()
{
    SfmlWindow  w(1024, 768, "Rtype");
    while (w.isOpen())
    {
      // Process events
      // sf::Event event;
      // while (window.pollEvent(event))
      //   {
      //     // Close window: exit
      //     if (event.type == sf::Event::Closed)
      //       window.close();
      //   }
      // Clear screen
      w.clear();
        w.draw(sprite);
      // Update the window
      w.display();
    }
  
}
