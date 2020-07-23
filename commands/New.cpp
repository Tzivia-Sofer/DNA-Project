#include "New.h"


std::string New::action(std::vector<std::string> vCommand)
{
    if(vCommand.size() == 1)
    {
        vCommand.push_back(getDefaultName(vCommand));
    }

    //DNAData dnaData(vCommand[1],vCommand[2],getId());
    DNAData dnaData("AA","name",0);
    Manager::getPool().addDNA(dnaData);

    return creatInput(vCommand);
}

std::string New::creatInput(std::vector<std::string>)
{
    return "succeded!!!!!!!!!!!!";
}

std::string New::getDefaultName(std::vector<std::string>)
{
    return "default";
}