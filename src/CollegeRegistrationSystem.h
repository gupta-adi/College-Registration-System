#ifndef COLLEGEREGISTRATIONSYSTEM_H
#define COLLEGEREGISTRATIONSYSTEM_H

#include "Student.h"
#include "Module.h"
#include <string>
#include <vector>
using namespace std;

class CollegeRegistrationSystem {
private:
    vector<Student> students;
    vector<Module> modules;

public:
    void addStudent(const string& id, const string& name);
    void updateStudentRecord(const string& id, const string& newName);
    void displayStudentRecord(const string& id) ;
    void displayAllStudentRecords() ;
    void addModule(const string& id, const string& name);
    void updateModule(const string& id, const string& newName);
    void displayModuleInfo(const string& id) ;
    void displayAllModuleInfo() ;
};

#endif