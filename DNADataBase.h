#ifndef __DATABASECOLLECTION__
#define __DATABASECOLLECTION__

#include <map>
#include <iostream>
#include "DNAData.h"

class DNADataBase
{
public:
    DNADataBase();
    static void addDNA(DNAData&);
    static void findDNA(DNAData&);

private:
    static std::map<std::string, size_t> m_mapNameToId;
    static std::map<size_t, DNAData> m_mapIdToDNA;
};

#endif //__DATABASECOLLECTION__