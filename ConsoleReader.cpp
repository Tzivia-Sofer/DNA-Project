#include "ConsoleReader.h"

std::string ConsoleReader::read()
{
    std::string input;
    getline(std::cin, input);
    return input;
}
