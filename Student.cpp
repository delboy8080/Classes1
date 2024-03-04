//
// Created by floodd on 04/03/2024.
//

#include "Student.h"
Student::Student()
{
    id = 1;
    name = "John Doe";
    age = 21;
    height = 1.6;
}
Student::Student(int id, string name, int age, double height)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->height = height;
}

int Student::getId()const
{
    return this->id;
}
string Student::getName()const
{
    return this->name;
}
int Student::getAge()const
{
    return this->age;
}
double Student::getHeight()const
{
    return this->height;
}

void Student::setId(int id)
{
    this->id = id;
}
void Student::setName(string name)
{
    this->name=name;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setHeight(double height)
{
    this->height = height;
}