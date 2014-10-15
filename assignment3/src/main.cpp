#include "ofMain.h"
#include "ofAppGlutWindow.h"

class testApp : public ofBaseApp {
public:

ofMesh              mesh;
ofPoint             vel;
ofPoint             ball;

 void setup() {
 ofSetFrameRate(100);
 ofBackground(0);
 vel.x = 10;
 }

 void update() {

}


 void draw() {
ofSetColor(0,0,255);
ofFill();
ofCircle(ofGetWidth()/2, ofGetHeight()/2,7);
 }

};

int main() {
 ofAppGlutWindow window;
 ofSetupOpenGL(&window, 800, 800, OF_WINDOW);
 ofRunApp(new testApp());
}


