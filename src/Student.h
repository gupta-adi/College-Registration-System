#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;
class Student {
private:
    string studentId;
    string name;
    string doa;
    string fname;
    // vector<string> modules;
    string level;
    


public:
    Student(const string& id, const string& n, const string &date,const string& fn, const string& lvl);
    string getId();
    string getName();
    string getLevel();
    string getFatherName();
    string getDOA();
    void setName(const string& newName);
    void setFatherName(const string& newFName);
    void setLevel(const string& newLevel);
    void setDOA(const string& newDate);
};

#endif