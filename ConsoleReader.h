#ifndef __CONSOLEREADER__
#define __CONSOLEREADER__

#include <iostream>
#include "IReader.h"

class ConsoleReader: public IReader
{
public:
    /*virtual*/ std::string read();
    ~ConsoleReader(){}
};

#endif //__CONSOLEREADER__