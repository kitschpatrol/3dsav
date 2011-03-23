#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

// git test
// git test
int main() {	
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1280,768, OF_WINDOW);
	ofRunApp(new testApp());
}