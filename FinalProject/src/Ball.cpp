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
    yvel = 5;
    xvel = 5;
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

int Ball::get_xvel() const {
    return xvel;
};

int Ball::get_yvel() const {
    return yvel;
};

void Ball::move() {
    xpos += xvel;
    ypos += yvel;
    if (ypos <= 0) {
        ypos = 0;
        yvel = -yvel;
    }
    if (ypos >= 720) {
        ypos = 720;
        yvel = -yvel;
    }
    if (xpos <= 60) {
        xpos = 60;
        xvel = -xvel;
    }
    if (xpos >= 1220) {
        xpos = 1220;
        xvel = -xvel;
    }
}
