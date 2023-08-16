#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Student::Student(const string &id, const string &n, const string &date,  const string &fn, const string &lvl) : studentId(id), name(n), doa(date), fname(fn), level(lvl) {}

string Student::getId()
{
    return studentId;
}

string Student::getName()
{
    return name;
}

string Student::getFatherName()
{
    return fname;
}

string Student::getLevel()
{
    return level;
}

string Student::getDOA()
{
    return doa;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setFatherName(const string &newFName)
{
    fname = newFName;
}

void Student::setLevel(const string &newLevel)
{
    level = newLevel;
}

void Student::setDOA(const string &newDate)
{
    doa = newDate;
}
