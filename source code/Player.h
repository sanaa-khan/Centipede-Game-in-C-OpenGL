#ifndef PLAYER_H
#define PLAYER_H

#include "MoveableObject.h"
#include "Bullet.h"
#include <GL/glut.h>
#include "util.h"

class Player : public MoveableObject {
public:
    Player();

    int getDirection() const;

    void setDirection(int direction);

    virtual void move();
    virtual void draw();
};

#endif
