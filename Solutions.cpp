#include "Student.h"
#include "Solutions.h"



void display_by_value(Student student)
{
    cout << "Display by value: " <<endl;
    cout << "ID: " << student.getId() << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Height: " << student.getHeight() << endl<<endl;

}

void display_by_reference(const Student &student)
{
    cout << "Display by Reference: " <<endl;
    cout << "ID: " << student.getId() << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Height: " << student.getHeight() << endl<<endl;

}

void display_by_pointer(const Student *student)
{
    cout << "Display by Pointer: " <<endl;
    cout << "ID: " << student->getId() << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Age: " << student->getAge() << endl;
    cout << "Height: " << student->getHeight() << endl<<endl;

}


void question1()
{
    Student student1;
    Student student2(2, "Tony Stark", 35, 1.5);
    display_by_value(student1);
    display_by_reference(student1);
    display_by_pointer(&student1);

    Student *studentPtr = new Student(3, "John Point", 18, 1.2);

    cout << "Student Name:" << studentPtr->getName() << endl;
    studentPtr->setHeight(1.6);
    display_by_value(*studentPtr);
    display_by_reference(*studentPtr);
    display_by_pointer(studentPtr);


    delete studentPtr;
}


void question2()
{
    DayType startDay;
    cout << "Setting the current day to Sunday " << endl;
    startDay.printCurrentDay();
    cout << "Previous Day: " << startDay.getPreviousDay() <<endl;
    cout << "Current Day: " << startDay.getCurrentDay() <<endl;
    cout << "Next Day: " << startDay.getNextDay() <<endl;
    cout << "13 days in the future: " << startDay.getDayXDaysInFuture(13) <<endl;
    cout << "\n\n\n";


    cout << "Setting the current day to Saturday " << endl;
    startDay.setCurrentDay(6);
    startDay.printCurrentDay();
    cout << "Previous Day: " << startDay.getPreviousDay() <<endl;
    cout << "Current Day: " << startDay.getCurrentDay() <<endl;
    cout << "Next Day: " << startDay.getNextDay() <<endl;
    cout << "13 days in the future: " << startDay.getDayXDaysInFuture(13) <<endl;
    cout << "\n\n\n";
}

void question3()
{
    clocktype ct;
    ct.setTime(11,59,59);
    cout << ct.getCurrentTime() <<endl;
    ct.incrementBySeconds(2);
    ct.displayCurrentTime();
    ct.incrementByMinutes(150);
    ct.displayCurrentTime();
}

void question4()
{
    enhanced_clock_type ct;
    ct.setTime(11,59,59);
    cout << ct.getCurrentTime() <<endl;
    ct.incrementBySeconds(2);
    ct.displayCurrentTime();
    ct.incrementByMinutes(150);
    ct.displayCurrentTime();

    cout << "Elapsed time (ct): " << ct.getElapsedTime()<<endl;
    cout << "Remaining time (ct): " << ct.getRemainingTime()<<endl;
    enhanced_clock_type ct2;
    ct2.setTime(6,30,52);

    cout << "Elapsed time (ct2): " << ct2.getElapsedTime()<<endl;
    cout << "Remaining time (ct2): " << ct2.getRemainingTime()<<endl;
    cout << "Difference: " << ct.diff(ct2) << endl;

}

void question5()
{
    ComplexNumber cn(3,4);
    cout <<"Complex Number: "<< cn.getReal()<<" + " << cn.getImaginary()<<"i"<<endl;
    cn.setReal(9);
    cn.setImaginary(5);
    cout <<"Complex Number: "<< cn.getReal()<<" + " << cn.getImaginary()<<"i"<<endl;

}