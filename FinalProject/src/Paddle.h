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
        int get_height() const;
        int get_width() const;
        int get_xpos() const;
        int get_ypos() const;
        void moveY(int dist);
    };
}

#endif /* Paddle_h */
