#ifndef CLOCK_H
#define CLOCK_H

class Clock {
public:
    Clock(int hour, int minute, int second);
    void displayTime() const;

protected:
    int hour;
    int minute;
    int second;
};

#endif