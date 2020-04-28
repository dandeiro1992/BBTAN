#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <vector>
#include "ball.h"
#include <iostream>
#include <SFML/Graphics.hpp>

class Equipment
{
public:
    std::vector <Ball> balls;
    Equipment(float t_X, float t_Y,float window_width, float window_height, float frame_width);
    ~Equipment()=default;
    void add_ball();
};

#endif // EQUIPMENT_H
