#ifndef FRAME_H
#define FRAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;


class Frame : public Drawable
{
public:
    Frame(float width,float height, float frame_width);
    Frame()=delete;
    ~Frame()=default;

    float get_width() const;
    void set_width(float value);
    float get_height() const;
    void set_height(float value);

private:
    RectangleShape left_Frame;
    RectangleShape right_Frame;
    RectangleShape top_Frame;
    RectangleShape bottom_Frame;
    float width;
    float height;
    float frame_width;
    void draw(RenderTarget &target, RenderStates states) const override;
};

#endif // FRAME_H
