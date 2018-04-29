//
//  Game.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/24/18.
//

#include <stdio.h>
#include "Game.h"
#include <cstdlib>

using namespace pong;

Game::Game(Paddle p1, Paddle p2, Ball b) {
    play1 = p1;
    play2 = p2;
    mainBall = b;
    game_over = false;
    p1_score = 0;
    p2_score = 0;
    game_tick = 0;
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

bool Game::get_game_over() {
    return game_over;
};

void Game::set_game_over(bool newstate) {
    game_over = newstate;
};

void Game::restart() {
    mainBall.set_xpos(640);
    mainBall.set_ypos(360);
    game_tick = 0;
    
    //Set random x and y velocities when restarting
    int rand_int1 = rand() % 2;
    int rand_int2 = rand() % 2;
    if (rand_int1 == 0) {
        mainBall.set_xvel(5);
    } else {
        mainBall.set_xvel(-5);
    }
    if (rand_int2 == 0) {
        mainBall.set_yvel(5);
    } else {
        mainBall.set_yvel(-5);
    }
};

int Game::get_p1_score() {
    return p1_score;
};

int Game::get_p2_score() {
    return p2_score;
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

/*
 Method to move the ball.
 */
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
            if (game_tick % 7 == 0) {
                mainBall.set_xvel(1.2 * (0 - mainBall.get_xvel()));
            } else if (game_tick % 6 == 0) {
                mainBall.set_yvel(1.3 * mainBall.get_yvel());
            } else {
                mainBall.set_xvel(0 - mainBall.get_xvel());
            }
            game_tick++;
        }
    }
    else if (mainBall.get_xpos() >= 1220) {
        if (mainBall.get_ypos() <= bottomy2 && mainBall.get_ypos() >= topy2) {
            mainBall.set_xpos(1220);
            if (game_tick % 7 == 0) {
                mainBall.set_xvel(1.2 * (0 - mainBall.get_xvel()));
            } else if (game_tick % 6 == 0) {
                mainBall.set_yvel(1.3 * mainBall.get_yvel());
            } else {
                mainBall.set_xvel(0 - mainBall.get_xvel());
            }
            game_tick++;
        }
    }
    if (mainBall.get_xpos() <= 0) {
        p2_score += 1;
        game_over = true;
        return;
    }
    if (mainBall.get_xpos() >= 1280) {
        p1_score += 1;
        game_over = true;
        return;
    }
};

