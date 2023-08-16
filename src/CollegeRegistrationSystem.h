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
    void addStudent(const string& id, const string& name, const string& fname, const string& level);
    void updateStudentRecord(const string& id, const string& newName, const string& newFather, const string& level);
    void displayStudentRecord(const string& id) ;
    void displayAllStudentRecords() ;
    void addModule(const string& id, const string& name);
    void updateModule(const string& id, const string& newName);
    void displayModuleInfo(const string& id) ;
    void displayAllModuleInfo() ;
};

#endif