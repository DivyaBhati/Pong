#include "ofApp.h"
#include "Paddle.h"
#include "Ball.h"
#include "Game.h"

using namespace pong;

Paddle game_play1 = Paddle(100, 20, 40, 300);
Paddle game_play2 = Paddle(100, 20, 1240, 300);
Ball game_mainBall = Ball();
Game mainGame = Game(game_play1, game_play2, game_mainBall);

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("PONG");
    current_state = SETUP;
}

//--------------------------------------------------------------
void ofApp::update(){
    mainGame.move_mainBall();
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
        ofSetColor(100, 100, 100);
        ofDrawBox(640, 360, 0, 6, 720, 0);
        ofSetColor(0, 255, 0);
    ofDrawBox(mainGame.get_play1().get_xpos(), mainGame.get_play1().get_ypos(), 0, mainGame.get_play1().get_width(), mainGame.get_play1().get_height(), 0);
        ofSetColor(255, 102, 255);
    ofDrawBox(mainGame.get_play2().get_xpos(), mainGame.get_play2().get_ypos(), 0, mainGame.get_play2().get_width(), mainGame.get_play2().get_height(), 0);
        ofSetColor(255, 255, 255);
    ofDrawBox(mainGame.get_mainBall().get_xpos(), mainGame.get_mainBall().get_ypos(), 0, mainGame.get_mainBall().get_radius(), mainGame.get_mainBall().get_radius(), 0);
    
    }
    else if (current_state == FINISHED) {
        ofSetColor(255, 255, 255);
        ofDrawBitmapString("GAME OVER", 600, 360);
        ofDrawBitmapString("PRESS 'R' TO RESTART", 555, 390);
        ofDrawBitmapString("Player 1 Score: " + std::to_string(mainGame.get_p1_score()), 555, 420);
        ofDrawBitmapString("Player 2 Score: " + std::to_string(mainGame.get_p2_score()), 555, 450);
    }
    else if (current_state == SETUP) {
        ofDrawBitmapString("Press '1' or '2' to choose gamemode!", 545, 390);
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
    else if (current_state == SETUP) {
        if (upper_key == '2') {
            mainGame.set_game_over(false);
            mainGame.restart();
            current_state = TWO_PLAYER;
            current_state = TWO_PLAYER;
        }
        if (upper_key == '1') {
            mainGame.set_game_over(false);
            mainGame.restart();
            current_state = ONE_PLAYER;
            selected_state = ONE_PLAYER;
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
