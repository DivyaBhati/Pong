//
//  Paddle.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//
#include <stdio.h>
#include "Paddle.h"

using namespace pong;

//Default constructor
Paddle::Paddle() {
    height = 40;
    width = 10;
    xpos = 30;
    ypos = 300;
};

//Parameterized constructor
Paddle::Paddle(int h, int w, int x, int y){
    height = h;
    width = w;
    xpos = x;
    ypos = y;
};

//Getters and setters
int Paddle::get_height() {
    return height;
};

int Paddle::get_width() {
    return width;
};

int Paddle::get_xpos() {
    return xpos;
};

int Paddle::get_ypos() {
    return ypos;
};

void Paddle::set_ypos(int newpos) {
    ypos = newpos;
};

