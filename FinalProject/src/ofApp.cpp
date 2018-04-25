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
}

//--------------------------------------------------------------
void ofApp::update(){
    mainGame.move_mainBall();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBox(mainGame.get_play1().get_xpos(), mainGame.get_play1().get_ypos(), 0, mainGame.get_play1().get_width(), mainGame.get_play1().get_height(), 0);
    ofDrawBox(mainGame.get_play2().get_xpos(), mainGame.get_play2().get_ypos(), 0, mainGame.get_play2().get_width(), mainGame.get_play2().get_height(), 0);
    ofDrawBox(mainGame.get_mainBall().get_xpos(), mainGame.get_mainBall().get_ypos(), 0, mainGame.get_mainBall().get_radius());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int upper_key = toupper(key);
    if (upper_key == OF_KEY_UP) {
        mainGame.move_play2(-30);
    }
    if (upper_key == OF_KEY_DOWN) {
        mainGame.move_play2(30);
    }
    if (upper_key == 'W') {
        mainGame.move_play1(-30);
    }
    if (upper_key == 'S') {
        mainGame.move_play1(30);
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
