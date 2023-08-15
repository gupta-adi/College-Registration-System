#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;
class Student {
private:
    string studentId;
    string name;
    // vector<string> modules;
    string level;


public:
    Student(const string& id, const string& n, const string& lvl);
    string getId();
    string getName();
    string getLevel();
    void setName(const string& newName);
    void setLevel(const string& newLevel);
};

#endif