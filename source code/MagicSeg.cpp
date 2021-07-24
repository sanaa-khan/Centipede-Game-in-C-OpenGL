#include "MagicSeg.h"

MagicSeg::MagicSeg() : Segment(), isBlinking(false) {}

bool MagicSeg::isBlinking1() const {
    return isBlinking;
}

void MagicSeg::setIsBlinking(bool isBlinking) {
    MagicSeg::isBlinking = isBlinking;
}
