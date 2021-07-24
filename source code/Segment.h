#ifndef SEGMENT_H
#define SEGMENT_H

#include "MoveableObject.h"

class Segment : public MoveableObject {
public:
    Segment();
    Segment(int xx, int yy);
    virtual void move();
    virtual void draw();
};

#endif
