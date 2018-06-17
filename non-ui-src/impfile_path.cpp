#include "impfile_path.h"

#include <string>
#include <stdio.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>

#include "filefolder.h"

uid_t getuid(void);
uid_t geteuid(void);

std::string impFile_path::impPath()
{
    char *u_name;

    struct passwd *pass;
    pass = getpwuid(getuid());

    u_name = pass->pw_name;

    impFile_path::PATH = "/home";
    impFile_path::PATH.append("/");
    impFile_path::PATH.append(u_name);

    return impFile_path::PATH;
}



