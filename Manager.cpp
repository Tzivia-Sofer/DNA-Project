#include "Manager.h"


DNADataBase Manager::m_DNAPoolData;

Manager::Manager(IReader *reader, IWriter *writer):m_cliObj(reader, writer)
{
    if(writer == nullptr)
    {
        m_defaultWriterUsed = true;
        m_cliObj.setWriter(new ConsoleWriter);
    }
    if (reader == nullptr)
    {
        m_defaultReaderUsed = true;
        m_cliObj.setReader(new ConsoleReader);
    }
}

void Manager::shutDown()
{
    if( m_defaultWriterUsed)
    {
        delete m_cliObj.getWriter();
    }

    if( m_defaultReaderUsed)
    {
        delete m_cliObj.getReader();
    }

    std::cout << "shutting down\n";
}

void Manager::run()
{
    m_cliObj.run();
}

Manager::~Manager()
{
    shutDown();
}