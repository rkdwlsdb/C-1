#include<stdio.h>

void Odd(int* arr);
void Even(int* arr);

int main(void)
{
    int arr[5];
    
    printf("Please input five integers: ");

    for (int i=0; i<5; i++)
    {    
        scanf("%d", &arr[i]);
    }

    Odd(arr);
    Even(arr);

    return 0;
}

void Odd(int* arr)
{
    printf("Odd numbers: ");
    for(int i=0; i<5; i++)
    {
        if (arr[i]%2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void Even(int* arr)
{
    printf("Even numbers: ");
    for(int i=0; i<5; i++)
    {
        if (arr[i]%2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}