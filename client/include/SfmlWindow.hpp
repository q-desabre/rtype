/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** sfmlWindow
*/

#ifndef _SFML_WINDOW_
# define _SFML_WINDOW_

# include <string>
# include <memory>
# include <SFML/Graphics.hpp>
# include "IWindow.hpp"

class SfmlWindow : public IWindow, public sf::RenderWindow
{
public:
    SfmlWindow(int width = 800,
               int height = 600,
               const std::string& name = "Window");
    ~SfmlWindow();
    
    void        init(int width, int height, const std::string& name);
    bool        isOpen() const;
    void        clear();
    void        display();
    void        close();

private:
    std::unique_ptr<sf::RenderWindow>    window;

};


#endif /* _SFML_WINDOW_ */
