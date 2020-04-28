#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "frame.h"
#include "ball.h"
#include "equipment.h"

using namespace sf;
using namespace std;

#define window_width 400
#define window_height 550
#define frame_width 25

int main()
{
    RenderWindow window{VideoMode{window_width,window_height}, "BB TAN", sf::Style::Close};
    window.setFramerateLimit(60);
    Frame frame(window_width,window_height,frame_width);
    Equipment equipment(window_width/2,window_height,window_width,window_height,frame_width);
    Event event;
    equipment.add_ball();
    equipment.add_ball();
    equipment.add_ball();
    equipment.add_ball();
    equipment.add_ball();
    equipment.add_ball();
    while(true)
    {
        window.clear(Color::Black);
        window.pollEvent(event);
        if(event.type==Event::Closed)
        {
            window.close();
            break;
        }
        if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }

        for (auto&ball:equipment.balls)
        {
            ball.update();
            window.draw(ball);
        }
        window.draw(frame);
        window.display();

    }
    return 0;
}


