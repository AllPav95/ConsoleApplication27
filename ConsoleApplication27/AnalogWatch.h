#ifndef ANALOGWATCH_H
#define ANALOGWATCH_H
#include "Clock.h"

class AnalogWatch : public Clock {
public:
    AnalogWatch(int hour, int minute, int second, bool hasHands);
    void checkTime() const;

private:
    bool hasHands;
};

#endif