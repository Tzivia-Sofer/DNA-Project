#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__


class ErrorIndex:public std::runtime_error{
public:
    ErrorIndex(std::string e):runtime_error(e){};
};

class ErrorInitDna:public std::runtime_error{
public:
    ErrorInitDna(std::string e):runtime_error(e){};
};

class ErrorSubSequence:public std::runtime_error{
public:
    ErrorSubSequence(std::string e):runtime_error(e){};
};

class ErrorSequence:public std::runtime_error{
public:
    ErrorSequence(std::string e):runtime_error(e){};
};


class ErrorOpenFile:public std::runtime_error{
public:
    ErrorOpenFile(std::string e):runtime_error(e){};
};

#endif