//
// Created by floodd on 04/03/2024.
//
#include <iostream>
#include<string>
#ifndef CLASSES1_ENHANCED_CLOCK_TYPE_H
#define CLASSES1_ENHANCED_CLOCK_TYPE_H


class enhanced_clock_type {
    int hrs, mins, sec;
public:
    enhanced_clock_type();
    void incrementBySeconds(int x);
    void incrementByMinutes(int x);
    void incrementByHours(int x);
    std::string getCurrentTime();
    void displayCurrentTime();
    void resetClock();
    void setTime(int hh, int mm,int sec);
    int getElapsedTime();
    int getRemainingTime();
    int diff(enhanced_clock_type &other);

};


#endif //CLASSES1_ENHANCED_CLOCK_TYPE_H
