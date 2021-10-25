/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** renderer
*/

#ifndef _RENDERER_
# define _RENDERER_

# include <memory>
# include "IWindow.hpp"

class Renderer
{
public:
    Renderer();
    ~Renderer();

private:
    std::unique_ptr<IWindow>    window;
};


#endif /* _RENDERER_ */
