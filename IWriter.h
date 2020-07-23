#ifndef __IWRITER__
#define __IWRITER__

#include <iostream>

class IWriter
{
public:
    virtual void write(std::string) = 0;
    virtual ~IWriter() {}
};

#endif  //__IWRITER__