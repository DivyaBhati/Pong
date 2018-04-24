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
        Ball(int r);
        void move();
        int get_xpos() const;
        int get_ypos() const;
        int get_xvel() const;
        int get_yvel() const;
        int get_radius() const;
    };

}

#endif /* Ball_h */
