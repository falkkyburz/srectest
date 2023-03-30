#include "srecord.h"
#include <stdio.h>

int main(void)
{
    FILE *fp;
    SRecord srec;

    fp = fopen("srecord.hex", "r");
    if (fp == NULL)
    {
        perror("Error opening file!");
        return -1;
    }

    while (Read_SRecord(&srec, fp) == SRECORD_OK)
    {
        Print_SRecord(&srec);
        printf("\n");
    }
    fclose(fp);
    return 0;
}
