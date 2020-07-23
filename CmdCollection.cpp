#include "CmdCollection.h"
#include "commands/commands.h"
#include <vector>


std::vector<std::string> CmdCollection::fromStrToCmd(std::string& command)
{
    std::vector<std::string> vCommand = ICommand::split(command);

    return vCommand;
}

ICommand* CmdCollection::gatMapping(std::string cmd)
{
    return m_map[cmd];
}

void CmdCollection::initCollection()
{
    m_map["new"] = new New;
    //m_map["load"] = new Load;
    //m_map["save"] = new Save;
}

void CmdCollection::destroyCollection()
{
    std::map<std::string,ICommand*>::iterator it;

    for (it = m_map.begin(); it != m_map.end(); it++)
    {
        //delete it;
    }
}