//
//  Paddle.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//

#include "Paddle.h"

using namespace pong;

Paddle::Paddle() {
    height = 40;
    width = 10;
    xpos = 30;
    ypos = 300;
};

Paddle::Paddle(int h, int w, int x, int y){
    height = h;
    width = w;
    xpos = x;
    ypos = y;
};

int Paddle::get_height() const {
    return height;
};

int Paddle::get_width() const {
    return width;
};

int Paddle::get_xpos() const {
    return xpos;
};

int Paddle::get_ypos() const {
    return ypos;
};

void Paddle::moveY(int dist) {
    ypos += dist;
    if (ypos < (height / 2)) {
        ypos = height / 2;
    }
    if (ypos > 720 - (height / 2)) {
        ypos = 720 - (height / 2);
    }
};
