#include "CLI.h"

CLI::CLI(IReader *reader, IWriter *writer):m_reader(reader), m_writer(writer),m_collection()
{
    m_collection.initCollection();
}

void CLI::run()
{
    std::cout << "my@cmd: ";
    std::string cmdAsString = m_reader->read();

    while (cmdAsString != "quit")
    {
        std::string output = execCmd(cmdAsString);
        m_writer->write(output);
        std::cout << "my@cmd: ";
        cmdAsString = m_reader->read();
    }
}

void CLI::setReader(IReader* reader)
{
    delete m_reader;
    m_reader = reader;
}

void CLI::setWriter(IWriter* writer)
{
    delete m_writer;
    m_writer = writer;
}

std::string CLI::execCmd(std::string &cmdAsStr)
{
    std::vector<std::string> vCommand = m_collection.fromStrToCmd(cmdAsStr);
    std::string output = m_collection.gatMapping(vCommand[0])->action(vCommand);

    return output;
}