#include"files_exten.h"

#include<string>

#include"debug.h"

char* noExtenDir(const char* file_dir){
    std::string str_file_dir;
    char* noexten_dir;
    size_t dotindex;

    str_file_dir = file_dir;    
    dotindex = str_file_dir.find(".");
    std::string str_temp_dir = str_file_dir.substr(0, dotindex);
    noexten_dir = str_temp_dir.data();

    LOG(noexten_dir);

    return noexten_dir;
}