#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

class Ball:public sf::Drawable
{
public:
    Ball(float t_X, float t_Y,float window_width, float window_height,float frame_width);
    Ball()=delete;
    ~Ball()=default;
    float t_X;
    float t_Y;
    float window_width;
    float window_height;
    float frame_width;
    bool is_on_board=false;
    float left();
    float right();
    float top();
    float bottom();
    void update();
    void start();
    float get_ball_velocity() const;
    void set_ball_velocity(float value);

private:
    CircleShape shape;
    float ball_velocity {3.0f};
    const float ball_radius{10.f};
    Vector2f direction {ball_velocity,ball_velocity};
    void draw(RenderTarget &target, RenderStates states) const override;
};

#endif // BALL_H
