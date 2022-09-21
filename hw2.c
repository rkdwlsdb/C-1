#include<stdio.h>

int main(void)
{
    // 1 mile = 1.609 km

    double km;
    double mile;
    printf("Please enter kilometers: ");
    scanf("%lf", &km);

    mile = km / 1.609;
    printf("%.1lf km is equal to %.1lf miles.\n", km, mile);
    
    return 0;
}