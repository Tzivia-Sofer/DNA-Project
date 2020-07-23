#include "ICommand.h"


size_t ICommand::m_id = 0;

size_t ICommand::getId()
{
    return m_id++;
}

void ICommand::setId(size_t idToInsetr)
{
    m_id = idToInsetr;
}

std::vector<std::string> ICommand::split(std::string &cmd)
{
    size_t pos = 0;
    std::vector<std::string> splitCmd;

    pos = cmd.find(' ') ;
    while(pos != std::string::npos)
    {
        splitCmd.push_back(cmd.substr(0, pos));
        cmd.erase(0, pos + 1);
        pos = cmd.find(' ');
    }

    splitCmd.push_back(cmd.substr(0, cmd.size()));

    return splitCmd;
}
