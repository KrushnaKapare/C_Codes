/*#include<stdio.h>

int main()
{
	int i, j, k,rows;
	printf("Enter the rows");
	scanf("%d",&rows);
	for(i=1 ; i<=rows; i++)
	{
		for(j=1; j<=rows -i; j++){
			printf(" ");
	       
		}
		for (j=1; j<=(2*i-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}*/

#include <stdio.h>

int main() {
    int i, j, rows = 3; // rows here is the middle point

    // 1. Upper Part (including the middle line)
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. Lower Part
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

