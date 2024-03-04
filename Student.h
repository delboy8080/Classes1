#include <string>

using namespace std;
#ifndef CLASSES1_STUDENT_H
#define CLASSES1_STUDENT_H


class Student {

    int id;
    string name;
    int age;
    double height;
public:
    Student();
    Student(int id, string name, int age, double height);

    int getId() const;
    string getName() const;
    int getAge() const;
    double getHeight() const;

    void setId(int name);
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);


};


#endif //CLASSES1_STUDENT_H
