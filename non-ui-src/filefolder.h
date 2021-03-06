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

    // this function is to copy html from template to main html file
    // c_file is the path of template(usually) and p_file is path to main html file(usually)
    void copyFileToAnotherFile(std::string c_file, std::string p_file);
};

#endif // FILEFOLDER_H
