#ifndef __CLI__
#define __CLI__

#include "IReader.h"
#include "IWriter.h"
#include "CmdCollection.h"

class CLI
{
public:
    CLI(IReader*, IWriter*);
    void run();
    void setReader(IReader*);
    void setWriter(IWriter*);
    IReader* getReader(){ return m_reader; }
    IWriter* getWriter() { return m_writer; }
    std::string execCmd(std::string&);

private:
    IReader* m_reader;
    IWriter* m_writer;
    CmdCollection m_collection;
};

#endif