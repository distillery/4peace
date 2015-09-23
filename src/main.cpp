#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"



int main() {
	ofSetupOpenGL(new ofAppGlutWindow, 1024, 768, OF_WINDOW);
	ofRunApp(new ofApp());
}
