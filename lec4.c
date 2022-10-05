#include<stdio.h>

int main(void)
{
    // int dan = 2, num = 0;
    // while(dan <= 9)
    // {
    //     num = 1;
        
    //     while(num <= 9)
    //     {
    //     printf("%d * %d = %2d \n", dan, num, dan * num);
    //     num++;
    //     }

    //     printf("\n");
    //     dan++;
    // }

    // 연습문제 7-2
    // 2번
    int cur = 1, num;
    printf("양의 정수를 하나 입력하시오: ");
    scanf("%d", &num);

    while(cur <= num)
    {
        printf("%d \n", 3 * cur);
        cur ++;
    }

    // 3번
    // int sum = 0, user_num;
    // printf("더할 정수를 입력하시오: ");
    // scanf("%d", &user_num);

    // while(user_num != 0)
    // {
    //     sum += user_num;
    //     printf("%d \n", sum);
    //     printf("더할 정수를 입력하시오: ");
    //     scanf("%d", &user_num);
    // }
    // printf("%d \n", sum);

    // 4번
    // int dan = 9, num;
    // printf("정수를 입력하시오: ");
    // scanf("%d", &num);

    // while(dan > 0)
    // {
    //     printf("%d * %d = %2d \n", num, dan, num * dan);
    //     dan--;
    // }

    // 5번
    // int num = 0, cur = 0, curfix = 0;
    // double sum = 0.0;
    // printf("몇 번 입력하시겠습니까? ");
    // scanf("%d", &cur);
    // curfix = cur;

    // while(cur > 0)
    // {
    //     printf("정수를 입력하시오: ");
    //     scanf("%d", &num);
    //     sum += num;
    //     cur--;
    // }
    // printf("%f \n", sum / curfix);
    
    // 연습문제 7-2
    // 1번
    // int cur = 5, sum = 0, user_num = 0;
    // while(cur > 0)
    // {
    //     // printf("더할 정수를 입력하시오: ");
    //     // scanf("%d", &user_num);
        
    //     while(user_num > 0)
    //     {
    //         printf("%d \n", sum);
    //         printf("더할 정수를 입력하시오: ");
    //         scanf("%d", &user_num);
    //         sum += user_num;
    //         cur --;
    //     }
    // }
    // printf("%d \n", sum);

    // 2번
    // int i = 0, k = 0;
    // while(i < 5)
    // {
    //     while(k < i)
    //     {
    //         printf("0");
    //         k++;
    //     }
    //     k = 0;
    //     printf("*\n");
    //     i++;
    // }

    // int total = 0, num = 0;
    // do
    // {
    //     printf("정수 입력(0 to quit): ");
    //     scanf("%d", &num);
    //     total += num;
    // }while(num != 0);
    // printf("합계: %d \n", total);

    // 연습문제 07-3
    // 2번
    // int total = 0, A = 2;
    // do
    // {
    //     total += A;
    //     A += 2;
    // }while(A <= 100);
    // printf("%d \n", total);

    // int total = 0;
    // int i, num;
    // printf("0부터 num까지의 덧셈, num은? ");
    // scanf("%d", &num);

    // for(i = 0; i <= num; i++)
    //     total += i;

    // printf("0부터 %d까지 덧셈결과: %d \n", num, total);


    int cur, is;
    for(cur = 2; cur < 10; cur++)
    {
        for(is = 1; is < 10; is++)
        {
            printf("%d * %d = %2d \n", cur, is, cur * is);
        }
        printf("\n");
    }

    // 연습문제 07-4
    // // 1번 
    // int num1, num2, total;
    // printf("첫번째 정수를 입력하세요: ");
    // scanf("%d", &num1);
    // printf("두번째 정수를 입력하세요: ");
    // scanf("%d", &num2);
    // // ("%d %d",&start, &end)
    
    // for (total = 0; num1 <= num2; num1++)
    // {
    //     total += num1;
    // }
    // printf("합계: %d \n", total);
    
    // 2번
    // int bin = 1, i, n;
    // printf("n를 입력하시오: ");
    // scanf("%d", &n);
    // for(i = 1; i <= n; i++)
    // {
    //     bin *= i;
    // }
    // printf("n: %d \n", bin);

    return 0;
}