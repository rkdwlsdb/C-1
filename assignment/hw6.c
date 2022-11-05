#include<stdio.h>

// 총 5개의 정수를 배열로 한꺼번에 입력 받아서, 
// 홀수와 짝수를 구분지어 출력하는 프로그램을 작성해 보세요.
// Please input five integers: 3 7 10 15 18 
// Odd numbers: 3 7 15
// Even numbers: 10 18

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