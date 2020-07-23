#ifndef __FILEREADER__
#define __FILEREADER__

#include <iostream>
#include "IReader.h"

class FileReader: public IReader
{
public:
    FileReader(std::string);
    /*virtual*/ std::string read(std::string);
};

#endif //__FILEREADER__