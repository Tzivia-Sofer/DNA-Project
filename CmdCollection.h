#ifndef __CMDCOLECTION__
#define __CMDCOLECTION__

#include <map>
#include <iostream>
#include "ICommand.h"

class CmdCollection
{
public:
    std::vector<std::string> fromStrToCmd(std::string&);
    void initCollection();
    void destroyCollection();
    ICommand* gatMapping(std::string);

private:
    std::map<std::string, ICommand*> m_map;
};


#endif //__CMDCOLECTION__

