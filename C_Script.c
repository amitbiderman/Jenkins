#include <stdio.h>
int cfileexists(const char * README){
    /* try to open file to read */
    FILE *file;
    if (file = fopen(README, "r")){
        fclose(file);
        return 1;
    }
    return 0;
