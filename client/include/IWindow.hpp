/*
** EPITECH PROJECT, 2021
** rtype
** File description:
** IWindow
*/

#ifndef _IWINDOW_
# define _IWINDOW_

class   IWindow
{
public:
    virtual void        init(int width, int height, const std::string& name) = 0;
    virtual bool        isOpen() const = 0;
    virtual void        clear() = 0;
    virtual void        display() = 0;
    virtual void        close() = 0;
};


#endif /* _IWINDOW_ */
