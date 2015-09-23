#include "ofApp.h"



void ofApp::setup() {
    ofBackground(255);
    
    // GENERAL
    ofSetFrameRate(NUM_FRAMES);
    ofSetWindowTitle("4PEACE");
	ofSetVerticalSync(true);
    
    glEnable(GL_DEPTH);

    demonstration = new Demonstration();
}



void ofApp::update() {

}



void ofApp::draw() {
    ofBackground(255);

    demonstration->draw();
}



void ofApp::keyPressed(int key) {
    demonstration->add("scan.png");
}

