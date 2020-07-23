#ifndef __ICOMNMAND__
#define __ICOMNMAND__

#include <vector>
#include "DNADataBase.h"

#include <iostream>
#include <vector>

class ICommand
{
public:
    virtual ~ICommand() {}
    virtual std::string action(std::vector<std::string>) = 0;
    virtual std::string getDefaultName(std::vector<std::string>) = 0;
    virtual std::string creatInput(std::vector<std::string>) = 0;

    static std::vector<std::string> split(std::string&);
    static size_t getId();
    void setId(size_t);

private:
    static size_t m_id;
};

#endif //__ICOMNMAND__