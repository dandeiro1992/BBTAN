#include "frame.h"

Frame::Frame(float width, float height,float frame_width)
{
    this->width=width;
    this->height=height;
    this->left_Frame.setPosition({0,0});
    this->top_Frame.setPosition({0,0});
    this->right_Frame.setPosition({width-frame_width,0});
    this->bottom_Frame.setPosition({0,height-frame_width});
    this->left_Frame.setFillColor(Color::White);
    this->right_Frame.setFillColor(Color::White);
    this->top_Frame.setFillColor(Color::White);
    this->bottom_Frame.setFillColor(Color::White);
    this->left_Frame.setSize({frame_width,height});
    this->right_Frame.setSize({frame_width,height});
    this->top_Frame.setSize({width,frame_width});
    this->bottom_Frame.setSize({width,frame_width});

}

float Frame::get_height() const
{
    return height;
}

void Frame::set_height(float value)
{
    height = value;
}

float Frame::get_width() const
{
    return width;
}

void Frame::set_width(float value)
{
    width = value;
}

void Frame::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(this->left_Frame,states);
    target.draw(this->right_Frame,states);
    target.draw(this->top_Frame,states);
    target.draw(this->bottom_Frame,states);
}
