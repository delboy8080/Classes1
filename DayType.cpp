//
// Created by floodd on 04/03/2024.
//

#include "DayType.h"
std::string DayType::days[7]  = {"Sunday", "Monday","Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};
DayType::DayType(unsigned int currentDay)
{
    this->currentDay = currentDay%7;

}
void DayType::setCurrentDay(unsigned int day)
{
    if(day < 7)
        this->currentDay = day;
    else
        this->currentDay = day%7; // used to ensure day is between 0- 6 inclusive
}
void DayType::printCurrentDay()
{
    std::cout <<"Current Day: "<< days[currentDay] << std::endl;
}
std::string DayType::getCurrentDay()
{
    return days[currentDay];
}
std::string DayType::getNextDay()
{
    return days[(currentDay+1)%7];
}
std::string DayType::getPreviousDay()
{
    return days[(currentDay+6)%7];
}
std::string DayType::getDayXDaysInFuture(int x)
{
    return days[(currentDay+x)%7];
}