#include<stdio.h>

void ReturnBinary(int n)
{
    int r = 0;
    r = n % 2;
    if (n >= 2)
        ReturnBinary(n/2);
    printf("%d", r);
    return ;
}

int main(void)
{
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    ReturnBinary(num);
    return 0;
}