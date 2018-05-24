#ifndef FILEFOLDER_H
#define FILEFOLDER_H

#include <string>

class filefolder
{
public:
    bool newFolder(std::string path);
    void newFile(std::string path);

    void writeToFile(std::string path, std::string content);

    std::string readFile(std::string path);
};

#endif // FILEFOLDER_H
