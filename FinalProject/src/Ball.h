//
//  Ball.h
//  FinalProject
//
//  Created by Divya Bhati on 4/19/18.
//

#ifndef Ball_h
#define Ball_h

namespace pong {

    class Ball {
        int radius;
        int xpos;
        int ypos;
        int xvel;
        int yvel;
    public:
        Ball();
        void move();
        int get_xpos();
        int get_ypos();
        int get_xvel();
        int get_yvel();
        int get_radius();
        void set_xpos(int newx);
        void set_ypos(int newy);
        void set_xvel(int new_xvel);
        void set_yvel(int new_yvel);
    };

}

#endif /* Ball_h */
