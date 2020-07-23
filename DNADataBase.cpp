#include "DNADataBase.h"


std::map<std::string, size_t> DNADataBase::m_mapNameToId;
std::map<size_t, DNAData> DNADataBase::m_mapIdToDNA;

DNADataBase::DNADataBase()
{

}

void DNADataBase::addDNA(DNAData& dnaData)
{
    m_mapNameToId[std::string(dnaData.getDNASequence())] = dnaData.getId();
    m_mapIdToDNA[dnaData.getId()] = dnaData;
}

void DNADataBase::findDNA(DNAData&)
{

}