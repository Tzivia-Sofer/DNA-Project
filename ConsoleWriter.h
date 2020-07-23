#ifndef __CONSOLEWRITER__
#define __CONSOLEWRITER__

#include <iostream>
#include "IWriter.h"

class ConsoleWriter: public IWriter
{
public:
    /*virtual*/ void write(std::string);
    ~ConsoleWriter() {}
};

#endif //__CONSOLEWRITER__