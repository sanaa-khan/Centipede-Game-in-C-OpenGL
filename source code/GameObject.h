#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Position.h"

class GameObject {
protected:
    Position point;
    int color;

public:
    GameObject();
    GameObject(int xx, int yy);
    GameObject(int xx, int yy, int c);
    Position getPoint() const;
    void setPoint(int xx, int yy);
    void setColor(int c);
    int getColor() const;

    virtual void draw() = 0;
};

#endif
