#include "ofApp.h"
#include "Paddle.h"
#include "Ball.h"

using namespace pong;
    Paddle mainPaddle = Paddle(100, 20, 40, 300);
    Ball mainBall = Ball(5);

//--------------------------------------------------------------
void ofApp::setup(){
    x = 0;
    ofSetWindowTitle("PONG");
}

//--------------------------------------------------------------
void ofApp::update(){
    mainBall.move(3,3);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBox(mainPaddle.get_xpos(), mainPaddle.get_ypos(), 0, mainPaddle.get_width(), mainPaddle.get_height(), 0);
    ofDrawBox(mainBall.get_xpos(), mainBall.get_ypos(), 0, mainBall.get_radius());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int upper_key = toupper(key);
    if (upper_key == OF_KEY_UP) {
        mainPaddle.moveY(-20);
    }
    if (upper_key == OF_KEY_DOWN) {
        mainPaddle.moveY(20);
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
