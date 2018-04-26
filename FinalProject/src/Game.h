//
//  Game.h
//  FinalProject
//
//  Created by Divya Bhati on 4/24/18.
//

#ifndef Game_h
#define Game_h
#include "Paddle.h"
#include "Ball.h"

using namespace pong;

    class Game {
        bool game_over;
        Paddle play1;
        Paddle play2;
        Ball mainBall;
        int p1_score;
        int p2_score;
        int game_tick;
    public:
        Game(Paddle p1, Paddle p2, Ball b);
        void move_play1(int ychange);
        void move_play2(int ychange);
        void move_mainBall();
        Paddle get_play1();
        Paddle get_play2();
        Ball get_mainBall();
        bool get_game_over();
        void set_game_over(bool newstate);
        void restart();
        int get_p1_score();
        int get_p2_score();
    };

#endif /* Game_h */
