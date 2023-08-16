#ifndef COLLEGEREGISTRATIONSYSTEM_H
#define COLLEGEREGISTRATIONSYSTEM_H

#include "Student.h"
#include "Module.h"
#include <string>
#include <map>
using namespace std;

class CollegeRegistrationSystem {
private:
    map<string, Student> students;
    map<string, Module> modules;

public:
    void addStudent();
    void updateStudentRecord();
    void displayStudentRecord(const string& id) ;
    void displayAllStudentRecords() ;
    void addModule();
    void updateModule();
    void displayModuleInfo(const string& id) ;
    void displayAllModuleInfo() ;
};

#endif