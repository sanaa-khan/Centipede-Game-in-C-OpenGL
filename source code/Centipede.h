#ifndef PROJECT_CENTIPEDE_H
#define PROJECT_CENTIPEDE_H

#include "LazySeg.h"
#include "MagicSeg.h"

class Centipede {
protected:
    int noOfSegments;
    Segment *segments;
    MagicSeg head;

public:
    Centipede();
    virtual void draw();
    virtual void move();

    int getNoOfSegments() const;
    void setNoOfSegments(int noOfSegments);
    void setBlink(bool b);
    bool Blink() const;
    void changeDirections();

    MagicSeg getHead() const;

    Position getMagicSeg() const;
    Position getLazySeg(int i) const;
};


#endif //PROJECT_CENTIPEDE_H
