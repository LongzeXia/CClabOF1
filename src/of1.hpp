//
//  of1.hpp
//  CClabOF1
//
//  Created by Longze Xia on 2017/12/18.
//

#pragma once

#include "ofMain.h"
#include <math.h>

class FireworkParticle {
    
public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    
    
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
    float alpha;
    int rotateDegree;
};

