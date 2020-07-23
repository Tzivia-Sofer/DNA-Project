#ifndef __SAVE__
#define __SAVE__

#include <iostream>
#include "../ICommand.h"

class Save: public ICommand
{
public:
    Save();
    ~Save();
    /*virtual*/ std::string action();
    /*virtual*/ void setParams(std::string);

private:
    std::string* m_params;
};

#endif //__SAVE__