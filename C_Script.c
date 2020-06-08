#include <stdio.h>
int cfileexists(const char * README.md){
    /* try to open file to read */
    FILE *file;
    if (file = fopen(README.md, "r")){
        fclose(file);
        return 1;
    }
    return 0;
