//
//  Ball.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//

#include <stdio.h>
#include "Ball.h"

using namespace pong;

Ball::Ball(int r) {
    radius = r;
    xpos = 640;
    ypos = 360;
};

int Ball::get_xpos() const {
    return xpos;
};

int Ball::get_ypos() const {
    return ypos;
};

int Ball::get_radius() const {
    return radius;
};

void Ball::move(int xchange, int ychange) {
    xpos += xchange;
    ypos += ychange;
}
