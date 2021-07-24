#ifndef PROJECT_BULLET_H
#define PROJECT_BULLET_H

#include "MoveableObject.h"

class Bullet : public MoveableObject {
public:
    Bullet();
    int getDirection() const;

    void setDirection(int direction);

    virtual void move();
    virtual void draw();
};


#endif //PROJECT_BULLET_H
