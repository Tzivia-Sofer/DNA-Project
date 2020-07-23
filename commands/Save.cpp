#include "Save.h"

std::string Save::action()
{
    return "save\n";
}

Save::~Save() {}

Save::Save(): m_params(nullptr){}

void Save::setParams(std::string cmdAsString)
{

}