#ifndef MAGICSEG_H
#define MAGICSEG_H

#include "Segment.h"

class MagicSeg : public Segment {
protected:
    bool isBlinking;
public:
    MagicSeg();

    bool isBlinking1() const;

    void setIsBlinking(bool isBlinking);
};

#endif
