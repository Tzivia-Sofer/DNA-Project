#ifndef __MANAGER__
#define __MANAGER__

#include "IReader.h"
#include "IWriter.h"
#include "CLI.h"
#include "DNADataBase.h"
#include "CmdCollection.h"
#include "ConsoleReader.h"
#include "ConsoleWriter.h"

class Manager
{
public:
    explicit Manager(IReader* = nullptr, IWriter* = nullptr);
    ~Manager();
    void run();
    void shutDown();
    static DNADataBase& getPool(){ return m_DNAPoolData; }

private:
    CLI m_cliObj;
    static DNADataBase m_DNAPoolData;
    bool m_defaultWriterUsed = false;
    bool m_defaultReaderUsed = false;
};

#endif
