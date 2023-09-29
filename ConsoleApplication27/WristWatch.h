#ifndef WRISTWATCH_H
#define WRISTWATCH_H
#include "Clock.h"

class WristWatch : public Clock {
public:
    WristWatch(int hour, int minute, int second, bool hasStrap);
    void wearWatch() const;

private:
    bool hasStrap;
};

#endif