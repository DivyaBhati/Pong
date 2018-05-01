//
//  Ball.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//

#include <stdio.h>
#include "Ball.h"
#include "Paddle.h"

using namespace pong;

//Default constructor
Ball::Ball() {
    radius = 20;
    xpos = 640;
    ypos = 360;
    yvel = 5;
    xvel = -5;
};

//Getters and setters
int Ball::get_xpos() {
    return xpos;
};

int Ball::get_ypos() {
    return ypos;
};

int Ball::get_radius() {
    return radius;
};

int Ball::get_xvel() {
    return xvel;
};

int Ball::get_yvel() {
    return yvel;
};

void Ball::set_xpos(int newx) {
    xpos = newx;
};

void Ball::set_ypos(int newy) {
    ypos = newy;
};

void Ball::set_xvel(int new_xvel) {
    xvel = new_xvel;
};

void Ball::set_yvel(int new_yvel) {
    yvel = new_yvel;
};
