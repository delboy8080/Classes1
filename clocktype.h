#include <string>
#include <iostream>
#ifndef CLASSES1_CLOCKTYPE_H
#define CLASSES1_CLOCKTYPE_H


class clocktype
{
    int hrs, mins, sec;
public:
    clocktype();
    void incrementBySeconds(int x);
    void incrementByMinutes(int x);
    void incrementByHours(int x);
    std::string getCurrentTime();
    void displayCurrentTime();
    void resetClock();
    void setTime(int hh, int mm,int sec);

};


#endif //CLASSES1_CLOCKTYPE_H
