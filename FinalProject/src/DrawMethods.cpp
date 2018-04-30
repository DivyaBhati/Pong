//
//  DrawMethods.cpp
//  FinalProject
//
//  Created by Divya Bhati on 4/30/18.
//

#include <stdio.h>
#include "ofApp.h"
#include "ofxTrueTypeFontUC.h"

using namespace pong;

void ofApp::drawNeon(Paddle player1, Paddle player2, Ball gameBall) {
    ofSetBackgroundColor(0, 0, 0);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(0, 255, 0);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    ofSetColor(255, 102, 255);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    ofSetColor(255, 255, 255);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::drawClassic(Paddle player1, Paddle player2, Ball gameBall) {
    ofSetBackgroundColor(0, 0, 0);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(255, 255, 255);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::drawPink(Paddle player1, Paddle player2, Ball gameBall) {
    ofSetBackgroundColor(252, 205, 234);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(229, 35, 108);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    ofSetColor(176, 35, 229);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    ofSetColor(0, 0, 0);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::drawLight(Paddle player1, Paddle player2, Ball gameBall) {
    ofSetBackgroundColor(180, 225, 255);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(255, 172, 228);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    ofSetColor(193, 255, 155);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    ofSetColor(171, 135, 255);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};
