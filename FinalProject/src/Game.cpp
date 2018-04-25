//
//  Game.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/24/18.
//

#include <stdio.h>
#include "Game.h"

using namespace pong;

Game::Game(Paddle p1, Paddle p2, Ball b) {
    play1 = p1;
    play2 = p2;
    mainBall = b;
    game_over = false;
};


void Game::move_play1(int ychange) {
    play1.set_ypos(play1.get_ypos() + ychange);
    if (play1.get_ypos() < (play1.get_height() / 2)) {
        play1.set_ypos(play1.get_height() / 2);
    }
    if (play1.get_ypos() > 720 - (play1.get_height() / 2)) {
        play1.set_ypos(720 - (play1.get_height() / 2));
    }
};

void Game::move_play2(int ychange) {
    play2.set_ypos(play2.get_ypos() + ychange);
    if (play2.get_ypos() < (play2.get_height() / 2)) {
        play2.set_ypos(play2.get_height() / 2);
    }
    if (play2.get_ypos() > 720 - (play2.get_height() / 2)) {
        play2.set_ypos(720 - (play2.get_height() / 2));
    }
};

void Game::move_mainBall() {
    if (game_over) {
        return;
    }
    mainBall.set_xpos(mainBall.get_xpos() + mainBall.get_xvel());
    mainBall.set_ypos(mainBall.get_ypos() + mainBall.get_yvel());
    if (mainBall.get_ypos() <= 0) {
        mainBall.set_ypos(0);
        mainBall.set_yvel(0 - mainBall.get_yvel());
    }
    else if (mainBall.get_ypos() >= 720) {
        mainBall.set_ypos(720);
        mainBall.set_yvel(0 - mainBall.get_yvel());
    }
    
    int topy1 = play1.get_ypos() - (play1.get_height() / 2);
    int bottomy1 = play1.get_ypos() + (play1.get_height() / 2);
    int topy2 = play2.get_ypos() - (play2.get_height() / 2);
    int bottomy2 = play2.get_ypos() + (play2.get_height() / 2);
    
    if (mainBall.get_xpos() <= 60) {
        if (mainBall.get_ypos() <= bottomy1 && mainBall.get_ypos() >= topy1) {
            mainBall.set_xpos(60);
            mainBall.set_xvel(0 - mainBall.get_xvel());
        }
    }
    else if (mainBall.get_xpos() >= 1220) {
        if (mainBall.get_ypos() <= bottomy2 && mainBall.get_ypos() >= topy2) {
            mainBall.set_xpos(1220);
            mainBall.set_xvel(0 - mainBall.get_xvel());
        }
    }
    if (mainBall.get_xpos() <= 0 || mainBall.get_xpos() >= 1280) {
        game_over = true;
    }
};

Paddle Game::get_play1() {
    return play1;
};

Paddle Game::get_play2() {
    return play2;
};

Ball Game::get_mainBall() {
    return mainBall;
};
