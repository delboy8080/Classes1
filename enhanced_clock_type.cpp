//
// Created by floodd on 04/03/2024.
//

#include "enhanced_clock_type.h"
//
// Created by floodd on 04/03/2024.
//

#include "enhanced_clock_type.h"

enhanced_clock_type::enhanced_clock_type()
{
    hrs = mins = sec = 0;
}
void enhanced_clock_type::incrementBySeconds(int x)
{
    sec = sec + x;
    if(sec >= 60)
    {
        incrementByMinutes(sec/60);
        sec = sec %60;
    }
}
void enhanced_clock_type::incrementByMinutes(int x)
{
    mins = mins+x;
    if(mins >= 60)
    {
        incrementByHours(mins/60);
        mins = mins %60;
    }
}
void enhanced_clock_type::incrementByHours(int x)
{
    hrs = (hrs +x)%24;
}
std::string enhanced_clock_type::getCurrentTime()
{
    return std::to_string(hrs)+":" + std::to_string(mins)+":"+ std::to_string(sec);
}
void enhanced_clock_type::displayCurrentTime()
{
    std::cout << hrs <<":"<<mins<<":"<<sec <<std::endl;
}
void enhanced_clock_type::resetClock()
{
    hrs = mins=sec=0;
}
void enhanced_clock_type::setTime(int hh, int mm,int sec)
{
    this->hrs = hh;
    this->mins =mm;
    this->sec = sec;
}

int enhanced_clock_type::getElapsedTime()
{
    return (hrs*3600) + (mins*60)+sec;
}
int enhanced_clock_type::getRemainingTime()
{
    return 86400-this->getElapsedTime();
}
int enhanced_clock_type::diff(enhanced_clock_type &other)
{
    return abs(other.getElapsedTime()- this->getElapsedTime());
}