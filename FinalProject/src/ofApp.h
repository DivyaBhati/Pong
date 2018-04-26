#pragma once

#include "ofMain.h"
#include "Paddle.h"
#include "Ball.h"
#include "Game.h"

using namespace pong;

class ofApp : public ofBaseApp{

    enum GameState {
        IN_PROGRESS,
        PAUSED,
        FINISHED,
        HIGHSCORE,
        SETUP
    };

	public:
    int x;
    GameState current_state = IN_PROGRESS;
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
