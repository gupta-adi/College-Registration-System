#ifndef MODULE_H
#define MODULE_H

#include <string>
using namespace std;
class Module {
private:
    string moduleId;
    string moduleName;

public:
    Module(const string& id, const string& name);
    string getId() ;
    string getName() ;
    void setName(const string& newName);
};

#endif