//
//  Paddle.h
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//

#ifndef Paddle_h
#define Paddle_h

namespace pong {

    class Paddle {
        int height;
        int width;
        int xpos;
        int ypos;
    public:
        Paddle();
        Paddle(int h, int w, int x, int y);
        int get_height();
        int get_width();
        int get_xpos();
        int get_ypos();
        void set_ypos(int newpos);
    };
}

#endif /* Paddle_h */
