#include "filefolder.h"

#include <string>
#include <cstdlib>
#include <fstream>
#include <stdio.h>

bool filefolder::newFolder(std::string path)
{
    std::string comm = "mkdir -p " + path;

    const int success = system(comm.c_str());

    if(success==0) return false;
    else if(success==1) return true;
}

void filefolder::newFile(std::string path)
{
    std::ofstream file;

    file.open(path.c_str());
    file.close();
}

void filefolder::writeToFile(std::string path, std::string content)
{
    std::ofstream file;

    file.open(path.c_str());
    file << content << '\n';
    file.close();
}
