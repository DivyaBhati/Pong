#include "ofApp.h"
#include "Paddle.h"
#include "Ball.h"
#include "Game.h"
#include "ofxTrueTypeFontUC.h"

using namespace pong;

Paddle game_play1 = Paddle(100, 20, 40, 300);
Paddle game_play2 = Paddle(100, 20, 1240, 300);
Ball game_mainBall = Ball();
Game mainGame = Game(game_play1, game_play2, game_mainBall);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("PONG");
    current_state = PLAYER_SETUP;
    myFont.loadFont("GamePlay.ttf", 64, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){
    if (current_state == ONE_PLAYER || current_state == TWO_PLAYER) {
        mainGame.move_mainBall();
    }
    if (mainGame.get_game_over()) {
        current_state = FINISHED;
    }
    if (current_state == ONE_PLAYER) {
        int ball_ypos = mainGame.get_mainBall().get_ypos();
        int cpu_paddle_ypos = mainGame.get_play2().get_ypos();
        
        //CPU logic
        if (cpu_paddle_ypos <= ball_ypos) {
            mainGame.move_play2(5);
        } else {
            mainGame.move_play2(-5);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //thursday 2pm 3405
    //thursday 2pm 3405
    //thursday 2pm 3405
    //thursday 2pm 3405
    
    if (current_state == TWO_PLAYER || current_state == ONE_PLAYER) {
        if (game_colors == CLASSIC) {
            drawClassic(mainGame.get_play1(), mainGame.get_play2(), mainGame.get_mainBall());
        } else if (game_colors == LIGHT) {
            drawLight(mainGame.get_play1(), mainGame.get_play2(), mainGame.get_mainBall());
        } else if (game_colors == NEON) {
            drawNeon(mainGame.get_play1(), mainGame.get_play2(), mainGame.get_mainBall());
        } else if (game_colors == PINK) {
            drawPink(mainGame.get_play1(), mainGame.get_play2(), mainGame.get_mainBall());
        }
    }
    else if (current_state == FINISHED) {
        ofSetColor(255, 255, 255);
        ofDrawBitmapString("GAME OVER", 600, 360);
        ofDrawBitmapString("PRESS 'R' TO RESTART", 555, 390);
        ofDrawBitmapString("Player 1 Score: " + std::to_string(mainGame.get_p1_score()), 555, 420);
        ofDrawBitmapString("Player 2 Score: " + std::to_string(mainGame.get_p2_score()), 555, 450);
    }
    else if (current_state == PLAYER_SETUP) {
        ofSetColor(255, 255, 255);
        myFont.drawString("Press '1' or '2' to choose gamemode!", 545, 390);
    }
    else if (current_state == COLOR_SETUP) {
        ofDrawBitmapString("Choose a color scheme!", 545, 390);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int upper_key = toupper(key);
    if (current_state == TWO_PLAYER) {
        if (upper_key == OF_KEY_UP) {
            mainGame.move_play2(-40);
        }
        if (upper_key == OF_KEY_DOWN) {
            mainGame.move_play2(40);
        }
        if (upper_key == 'W') {
            mainGame.move_play1(-40);
        }
        if (upper_key == 'S') {
            mainGame.move_play1(40);
        }
    }
    else if (current_state == ONE_PLAYER) {
        if (upper_key == 'W') {
            mainGame.move_play1(-40);
        }
        if (upper_key == 'S') {
            mainGame.move_play1(40);
        }
    }
    else if (current_state == FINISHED) {
        if (upper_key == 'R') {
            mainGame.set_game_over(false);
            mainGame.restart();
            current_state = selected_state;
        }
    }
    else if (current_state == PLAYER_SETUP) {
        if (upper_key == '1') {
            current_state = COLOR_SETUP;
            selected_state = ONE_PLAYER;
        }
        if (upper_key == '2') {
            current_state = COLOR_SETUP;
            selected_state = TWO_PLAYER;
        }
    }
    else if (current_state == COLOR_SETUP) {
        if (upper_key == '1') {
            game_colors = CLASSIC;
            current_state = selected_state;
            mainGame.set_game_over(false);
            mainGame.restart();
        }
        if (upper_key == '2') {
            game_colors = LIGHT;
            current_state = selected_state;
            mainGame.set_game_over(false);
            mainGame.restart();
        }
        if (upper_key == '3') {
            game_colors = NEON;
            current_state = selected_state;
            mainGame.set_game_over(false);
            mainGame.restart();
        }
        if (upper_key == '4') {
            game_colors = PINK;
            current_state = selected_state;
            mainGame.set_game_over(false);
            mainGame.restart();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
