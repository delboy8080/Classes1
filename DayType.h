//
// Created by floodd on 04/03/2024.
//
#include <string>
#include <iostream>
#ifndef CLASSES1_DAYTYPE_H
#define CLASSES1_DAYTYPE_H


class DayType {

    static std::string days[7];
    unsigned int currentDay;
public:
    DayType(unsigned int currentDay = 0);
    void setCurrentDay(unsigned int day);
    void printCurrentDay();
    std::string getCurrentDay();
    std::string getNextDay();
    std::string getPreviousDay();
    std::string getDayXDaysInFuture(int x);


};


#endif //CLASSES1_DAYTYPE_H
