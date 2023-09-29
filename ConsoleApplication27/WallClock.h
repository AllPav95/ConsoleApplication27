#ifndef WALLCLOCK_H
#define WALLCLOCK_H
#include "Clock.h"

class WallClock : public Clock {
public:
    WallClock(int hour, int minute, int second, bool isTicking);
    void hangOnWall() const;

private:
    bool isTicking;
};

#endif 