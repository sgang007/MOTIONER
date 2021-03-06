#pragma once

#include "ofMain.h"

#include "ramOscSender.h"
#include "ramOscReceiver.h"

#include "ofxEvent.h"

//----------------------------------------------------------------------------------------
class MotionerApp : public ofBaseApp {
public:
    //--------------------
    MotionerApp();
    ~MotionerApp();
    
    //--------------------
    void setup();
    void exit();
    void update();
    void draw();
    
    //--------------------
    void keyPressed(int key);
    void windowResized(int w, int h);
    
    void onMessageReceived(ofxEventMessage &m);
    
    void dragEvent(ofDragInfo dragInfo);
    
private:
    /// draw
    //--------------------
    ofVboMesh mGrid;
    ofVec3f mOffset;
    
    bool mEnableDraw;
    bool mEnableUpdateSkeletons;
    
    /// network
    //--------------------
    /// output motion data
    ram::OscSender   mOscSender;
    
    ofLight mLight;
    
    ram::OscReceiver mOscReceiver;
};
