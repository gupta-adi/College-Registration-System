#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;
class Student {
private:
    string studentId;
    string name;

public:
    Student(const string& id, const string& n);
    string getId();
    string getName();
    void setName(const string& newName);
};

#endif