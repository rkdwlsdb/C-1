#include<stdio.h>

int main(void)
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6]={7,8,9,10,11,12};

    printf("arr1: ");
    for (int i=0; i<6; i++)
        printf("%d ", arr1[i]);
    
    printf("\narr2: ");
    for (int i=0; i<6; i++)
        printf("%d ", arr2[i]);
    
    printf("\n\nafter swap\n");
    
    int *ptr_arr1=arr1;
    int *ptr_arr2=arr2;
    int temp;
    
    for (int i=0; i<6; i++)
    {
        temp = *(ptr_arr1+i);
        *(ptr_arr1+i) = *(ptr_arr2+i);
        *(ptr_arr2+i) = temp;
    }

    printf("arr1: ");
    for (int i=0; i<6; i++)
        printf("%d ", ptr_arr1[i]);
    
    printf("\narr2: ");
    for (int i=0; i<6; i++)
        printf("%d ", ptr_arr2[i]);
    printf("\n");
    return 0;
}
