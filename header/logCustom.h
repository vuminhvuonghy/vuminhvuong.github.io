#ifndef LOGCUSTOM_H
#define LOGCUSTOM_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <iostream>
#include <sstream>
using namespace std;

#define LOG_DEBUG logObj()<<"[DEBUG]:"<< __FILE__<<"/"<< __LINE__<<"/"<< __func__<<":  "

class logObj{
private:
    std::ostringstream os;
public:
    ~logObj(){
        os << std::endl;
        std::cerr << os.str();
        std::ofstream log_file();
    }
    logObj(){
    }
    template<typename T>
    logObj& operator <<(T data){
        os<<data;
        return *this;
    }
};

#endif // LOGCUSTOM_H

