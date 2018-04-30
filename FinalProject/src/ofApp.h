#pragma once

#include "ofMain.h"
#include "Paddle.h"
#include "Ball.h"
#include "Game.h"
#include "ofxTrueTypeFontUC.h"

using namespace pong;

class ofApp : public ofBaseApp{

    enum GameState {
        TWO_PLAYER,
        ONE_PLAYER,
        PAUSED,
        FINISHED,
        PLAYER_SETUP,
        COLOR_SETUP
    };

    enum ColorScheme {
        CLASSIC,
        LIGHT,
        NEON,
        PINK
    };
    
	public:
        int x;
        GameState current_state;
        GameState selected_state;
        ColorScheme game_colors;
        ofxTrueTypeFontUC myFont;
        ofxTrueTypeFontUC infoFont;
        ofxTrueTypeFontUC largeFont;

    
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
    
    void drawClassic(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2);
    void drawLight(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2);
    void drawNeon(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2);
    void drawPink(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2);
    void finishedClassic(int score1, int score2);
    void finishedLight(int score1, int score2);
    void finishedNeon(int score1, int score2);
    void finishedPink(int score1, int score2);
		
};
