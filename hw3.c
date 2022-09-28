#include<stdio.h>

int main(void)
{
    int blank, star;
    for(int i = 0; i < 5; i++)
    {
        int blank = 4 - i; 
        int star = 2 * (i + 1) - 1;
        for(int b = 0; b < blank; b++)
        {
            printf(" "); 
        }
        for(int s = 0; s < star; s++)
        {
            printf("*");
        }
    printf("\n");
    }


    return 0;
}