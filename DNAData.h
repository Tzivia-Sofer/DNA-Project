#ifndef __DNADATA__
#define __DNADATA__

#include <iostream>
#include "DNA.h"


class DNAData
{
public:
    DNAData();
    DNAData(const std::string &dna, const std::string &name, size_t id);
    size_t getId() const { return  m_id; }
    std::string getName() const { return m_name; }
    std::string getDNASequence() const { return  m_dna.getSequence(); }

private:
    size_t m_id;
    std::string m_name;
    Dna m_dna;
};

#endif //__DNADATA__