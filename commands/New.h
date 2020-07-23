#ifndef __NEW__
#define __NEW__

#include <iostream>
#include "../ICommand.h"
#include "../Manager.h"

class New: public ICommand
{
public:
    New() {};
    /*virtual*/ std::string action(std::vector<std::string>);
    /*virtual*/ std::string getDefaultName(std::vector<std::string>);
    /*virtual */std::string creatInput(std::vector<std::string>);
    ~New() {}

};

#endif //__NEW__