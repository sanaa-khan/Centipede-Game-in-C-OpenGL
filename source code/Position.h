#ifndef POSITION_H
#define POSITION_H

class Position {
protected:
    int x;
    int y;

public:
    Position();
    Position(int xx, int yy);
    int getX() const;
    int getY() const;
    void setX(int);
    void setY(int);
};

#endif