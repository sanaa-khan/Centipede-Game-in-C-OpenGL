#ifndef MOVEABLEOBJECT_H
#define MOVEABLEOBJECT_H

#include "GameObject.h"
#include <GL/glut.h>
#include "util.h"

class MoveableObject : public GameObject {
protected:
    int direction;
public:
    MoveableObject();
    MoveableObject(int xx, int yy);
    MoveableObject(int xx, int yy, int c);

    int getDirection() const;

    void setDirection(int direction);

    virtual void move() = 0;
};

#endif
