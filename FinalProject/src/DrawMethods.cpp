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

void ofApp::drawClassic(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2) {
    ofSetBackgroundColor(0, 0, 0);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(255, 255, 255);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
    myFont.drawString(std::to_string(score1), 560, 80);
    myFont.drawString(std::to_string(score2), 685, 80);
};

void ofApp::drawNeon(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2) {
    ofSetBackgroundColor(0, 0, 0);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(0, 255, 0);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    myFont.drawString(std::to_string(score1), 560, 80);
    ofSetColor(255, 102, 255);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    myFont.drawString(std::to_string(score2), 685, 80);
    ofSetColor(0, 255, 255);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::drawPink(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2) {
    ofSetBackgroundColor(252, 205, 234);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(229, 35, 108);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    myFont.drawString(std::to_string(score1), 560, 80);
    ofSetColor(176, 35, 229);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    myFont.drawString(std::to_string(score2), 685, 80);
    ofSetColor(255, 0, 0);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::drawLight(Paddle player1, Paddle player2, Ball gameBall, int score1, int score2) {
    ofSetBackgroundColor(180, 225, 255);
    ofSetColor(100, 100, 100);
    ofDrawBox(640, 360, 0, 6, 720, 0);
    ofSetColor(255, 172, 228);
    ofDrawBox(player1.get_xpos(), player1.get_ypos(), 0, player1.get_width(), player1.get_height(), 0);
    myFont.drawString(std::to_string(score1), 560, 80);
    ofSetColor(193, 255, 155);
    ofDrawBox(player2.get_xpos(), player2.get_ypos(), 0, player2.get_width(), player2.get_height(), 0);
    myFont.drawString(std::to_string(score2), 685, 80);
    ofSetColor(141, 105, 255);
    ofDrawBox(gameBall.get_xpos(), gameBall.get_ypos(), 0, gameBall.get_radius(), gameBall.get_radius(), 0);
};

void ofApp::finishedClassic(int score1, int score2) {
    ofSetColor(255, 255, 255);
    largeFont.drawString("GAME OVER", 420, 200);
    myFont.drawString("'R' TO RESTART, 'Q' TO MAIN MENU", 150, 300);
    infoFont.drawString("Player 1 Score: ", 200, 420);
    infoFont.drawString("Player 2 Score: ", 750, 420);
    largeFont.drawString(std::to_string(score1), 340, 600);
    largeFont.drawString(std::to_string(score2), 920, 600);
};

void ofApp::finishedLight(int score1, int score2) {
    ofSetColor(255, 255, 0);
    largeFont.drawString("GAME OVER", 420, 200);
    ofSetColor(255, 255, 255);
    myFont.drawString("'R' TO RESTART, 'Q' TO MAIN MENU", 150, 300);
    infoFont.drawString("Player 1 Score: ", 200, 420);
    infoFont.drawString("Player 2 Score: ", 750, 420);
    ofSetColor(255, 172, 228);
    largeFont.drawString(std::to_string(score1), 340, 600);
    ofSetColor(193, 255, 155);
    largeFont.drawString(std::to_string(score2), 920, 600);
};

void ofApp::finishedNeon(int score1, int score2) {
    ofSetColor(0, 255, 255);
    largeFont.drawString("GAME OVER", 420, 200);
    ofSetColor(255, 255, 255);
    myFont.drawString("'R' TO RESTART, 'Q' TO MAIN MENU", 150, 300);
    infoFont.drawString("Player 1 Score: ", 200, 420);
    infoFont.drawString("Player 2 Score: ", 750, 420);
    ofSetColor(0, 255, 0);
    largeFont.drawString(std::to_string(score1), 340, 600);
    ofSetColor(255, 102, 255);
    largeFont.drawString(std::to_string(score2), 920, 600);
};

void ofApp::finishedPink(int score1, int score2) {
    ofSetColor(255, 0, 0);
    largeFont.drawString("GAME OVER", 420, 200);
    ofSetColor(0, 0, 0);
    myFont.drawString("'R' TO RESTART, 'Q' TO MAIN MENU", 150, 300);
    infoFont.drawString("Player 1 Score: ", 200, 420);
    infoFont.drawString("Player 2 Score: ", 750, 420);
    ofSetColor(229, 35, 108);
    largeFont.drawString(std::to_string(score1), 340, 600);
    ofSetColor(176, 35, 229);
    largeFont.drawString(std::to_string(score2), 920, 600);
};

