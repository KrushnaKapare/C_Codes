#include<stdio.h>

int main(void)
{
    int i = 10;
    char *cp;
    cp = (char *)&i;
    if(*cp == 10)
        printf("Little Endian \n");
    else
        printf("Big Endian \n");
    
    return 0;
}