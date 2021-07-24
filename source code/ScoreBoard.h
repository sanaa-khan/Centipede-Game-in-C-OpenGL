#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <GL/glut.h>
#include <iostream>
#include <string>
#include "util.h"
#include "GameObject.h"

using std::string;

class ScoreBoard : public GameObject {
protected:
    int lives;
    int score;

public:
    ScoreBoard();

    int getLives() const;

    void setLives(int lives);

    int getScore() const;

    void setScore(int score);

    virtual void draw();
};

#endif
