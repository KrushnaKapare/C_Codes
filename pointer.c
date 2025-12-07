#include<stdio.h>

// printing the binary format of a float and double using char pointer 

int main(void)
{
    float num = 12.5;
    char *cptr;
    int pos;
    cptr = (char*)&num;
    for(cptr=cptr+3; cptr>=(char*)&num; cptr--)
    {
        for(pos = 7 ; pos>=0 ; pos--)
            printf("%d",*cptr>>pos&1);
    }
    printf("\n");
    return 0;
}