#ifndef MUSHROOM_H
#define MUSHROOM_H

#include <GL/glut.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "util.h"
#include "GameObject.h"

class Mushroom : public GameObject {
public:
    Mushroom();
    virtual void draw();
};

#endif
