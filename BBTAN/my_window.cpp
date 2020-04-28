#include "my_window.h"

My_Window::My_Window()
{
    RenderWindow window{VideoMode{800,600}, "Arcanoid"};
    window.setFramerateLimit(60);
    Event event;

}
