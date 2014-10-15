#pragma once

#include <ofMain.h>
#include <ofxGui.h>
#include <ofxOsc.h>

#define OSC_REMOTE_HOST "192.87.217.150"
#define OSC_REMOTE_PORT 7777

class testApp : public ofBaseApp{

public:
  void setup();
  void exit1();
void exit2();
  void update();
  void draw();

  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);

  void rowSliderChanged(int& row);
  void columnSliderChanged(int& row);
  void boxOnButton();
  void boxOffButton();


  ofxIntSlider rowSlider;
  ofxIntSlider columnSlider;
  ofxButton box1Button;
  ofxButton box2Button;

  ofxPanel controlPanel;

  ofxOscSender oscSender;

private:
  int row,column;
};
