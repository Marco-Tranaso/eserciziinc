#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <error.h>
const char*name = "crea";
int main(void)
{
    mkdir(name);
    exit(EXIT_SUCCESS);
}