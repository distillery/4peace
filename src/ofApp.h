#pragma once

#include "ofMain.h"
#include "Demonstration.h"

#define NUM_FRAMES 24



class ofApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();

        void keyPressed(int key);

    private:
        Demonstration* demonstration;
};
