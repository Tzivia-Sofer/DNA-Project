#include "DNAData.h"


DNAData::DNAData(const std::string &dna, const std::string &name, size_t id):
m_dna(dna),m_name(name), m_id(id) {}

DNAData::DNAData() :m_dna(NULL),m_name(NULL),m_id(0) {}