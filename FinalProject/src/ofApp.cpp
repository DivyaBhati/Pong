#include "ofApp.h"
#include "Paddle.h"

using namespace paddle;
    Paddle mainPaddle = Paddle(100, 20, 40, 300);

//--------------------------------------------------------------
void ofApp::setup(){
    x = 0;
    ofSetWindowTitle("PONG");
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBox(mainPaddle.get_xpos(), mainPaddle.get_ypos(), 0, mainPaddle.get_width(), mainPaddle.get_height(), 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    int upper_key = toupper(key);
    if (upper_key == 'W') {
        mainPaddle.moveY(-20);
    }
    if (upper_key == 'S') {
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
