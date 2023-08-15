#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Student::Student(const string &id, const string &n, const string &lvl) : studentId(id), name(n), level(lvl)  {}

string Student::getId()
{
    return studentId;
}

string Student::getName()
{
    return name;
}

string Student::getLevel()
{
    return level;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setLevel(const string &newLevel)
{
    level = newLevel;
}
