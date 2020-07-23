#ifndef __LOAD__
#define __LOAD__

#include <iostream>
#include "../ICommand.h"

class Load: public ICommand
{
public:
    Load();
    ~Load() {}
    /*virtual*/ std::string action();
    /*virtual*/ void setParams(std::string);

private:
    std::string* m_params;
};

#endif //__LOAD__