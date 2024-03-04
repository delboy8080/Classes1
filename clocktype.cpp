//
// Created by floodd on 04/03/2024.
//

#include "clocktype.h"

clocktype::clocktype()
{
    hrs = mins = sec = 0;
}
void clocktype::incrementBySeconds(int x)
{
    sec = sec + x;
    if(sec >= 60)
    {
        incrementByMinutes(sec/60);
        sec = sec %60;
    }
}
void clocktype::incrementByMinutes(int x)
{
    mins = mins+x;
    if(mins >= 60)
    {
        incrementByHours(mins/60);
        mins = mins %60;
    }
}
void clocktype::incrementByHours(int x)
{
    hrs = (hrs +x)%24;
}
std::string clocktype::getCurrentTime()
{
    return std::to_string(hrs)+":" + std::to_string(mins)+":"+ std::to_string(sec);
}
void clocktype::displayCurrentTime()
{
    std::cout << hrs <<":"<<mins<<":"<<sec <<std::endl;
}
void clocktype::resetClock()
{
    hrs = mins=sec=0;
}
void clocktype::setTime(int hh, int mm,int sec)
{
    this->hrs = hh;
    this->mins =mm;
    this->sec = sec;
}