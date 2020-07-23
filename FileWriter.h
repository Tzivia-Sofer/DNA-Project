#ifndef __FILEWRITER__
#define __FILEWRITER__

#include <iostream>
#include "IWriter.h"

class FileWriter: public IWriter
{
public:
    /*virtual*/ void write(std::string);
};

#endif //__FILEREADER__