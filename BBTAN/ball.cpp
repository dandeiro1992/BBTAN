#include "ball.h"

Ball::Ball(float t_X, float t_Y,float window_width, float window_height, float frame_width)
{
    this->window_width=window_width;
    this->window_height=window_height;
    this->frame_width=frame_width;
    this->t_X=t_X;
    this->t_Y=t_Y;
    shape.setFillColor(Color::White);
    shape.setRadius(this->ball_radius);
    shape.setPosition(t_X,t_Y);
    shape.setOrigin(this->ball_radius,this->ball_radius);
}

void Ball::update()
{
    if(this->is_on_board)
    {
        shape.move(this->direction);
        if (this->left()<frame_width)
            direction.x=ball_velocity;
        else if (this->right()>window_width-frame_width)
        {
            direction.x=-ball_velocity;
        }
        else if (this->top()<frame_width)
        {
            direction.y=ball_velocity;
        }
        else if (this->bottom()>window_height-frame_width)
        {
            direction.y=-ball_velocity;
        }
    }
    else
    {
        shape.move({0,-(this->ball_velocity)});
        if (this->shape.getPosition().y<this->window_height)
        {
            this->is_on_board=true;
            this->t_Y=this->window_height;
        }

    }

}

float Ball::get_ball_velocity() const
{
    return ball_velocity;
}

void Ball::set_ball_velocity(float value)
{
    ball_velocity = value;
}

void Ball::draw(RenderTarget &target, RenderStates states) const
{
    target.draw(this->shape,states);
}

float Ball::left()
{
    return this->shape.getPosition().x-shape.getRadius();
}

float Ball::right()
{
    return this->shape.getPosition().x+shape.getRadius();
}
float Ball::top()
{
    return this->shape.getPosition().y-shape.getRadius();
}
float Ball::bottom()
{
    return this->shape.getPosition().y+shape.getRadius();
}
