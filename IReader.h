#ifndef __IREADER__
#define __IREADER__

#include <iostream>

class IReader
{
public:
    virtual std::string read() = 0;
    virtual ~IReader() {}
};

#endif  //__IREADER__