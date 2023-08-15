#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Student::Student(const string &id, const string &n) : studentId(id), name(n) {}

string Student::getId()
{
    return studentId;
}

string Student::getName()
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}
