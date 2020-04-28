#include "equipment.h"

Equipment::Equipment(float t_X, float t_Y,float window_width, float window_height, float frame_width)
{
    this->balls.emplace_back(t_X,t_Y,window_width,window_height,frame_width);
}


void Equipment::add_ball()
{
    int size_of_vector=this->balls.size();
// parametry ostatnio dodanej kuleczki
    float t_X=this->balls[size_of_vector-1].t_X;
    float t_Y=this->balls[size_of_vector-1].t_Y;
    float window_width=this->balls[size_of_vector-1].window_width;
    float window_height=this->balls[size_of_vector-1].window_height;
    float frame_width=this->balls[size_of_vector-1].frame_width;
    this->balls.emplace_back(t_X,t_Y+13*balls[0].get_ball_velocity(),window_width,window_height,frame_width);
}
