#include<stdio.h>

int main(void)
{
    int color;
    int R, G, B;
    int change;
    int xR, xG, xB;
    int value;

    char channel;
    char answer;

    printf("==========================\n");
    printf("\n");
    printf("16진수 컬러 코드값을 입력하세요: ");
    scanf("%x", &color);

    R = color & 0xff0000;
    R = R >> 16; 
    G = color & 0x00ff00;
    G = G >> 8;
    B = color & 0x0000ff;
    B = B >> 0;

    printf("입력된 컬러의 R,G,B 값은 (%d, %d, %d)입니다. \n", R, G, B);
    printf("\n");

    for(;;)
    {
        while(1)
        {
            printf("RGB 중 변경할 컬러 채널을 입력하세요: ");
            scanf(" %c", &channel);

            if(channel == 'R' || channel == 'r')
            {
                printf("R 채널의 증감 정도를 입력하세요: ");
                scanf("%d", &change);
                printf("\n");
                R += change;
                if(R < 0)
                {
                    R = 0;
                }
                break;
            }
            else if(channel == 'G' || channel == 'g')
            {
                printf("G 채널의 증감 정도를 입력하세요: ");
                scanf("%d", &change);
                printf("\n");
                G += change;
                if(G < 0)
                {
                    G = 0;
                }
                break;
            }
            else if(channel == 'B' || channel == 'b')
            {
                printf("B 채널의 증감 정도를 입력하세요: ");
                scanf("%d", &change);
                printf("\n");
                B += change;
                if(B < 0)
                {
                    B = 0;
                }
                break;
            }
            else
            {
                printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
                printf("\n");
                continue;
            }
        }
        
        // printf("%x \n", R);
        xR = R + 0x000000;
        // printf("%x\n", xR);
        xR = xR << 16;
        // printf("%x\n", xR);
        
        xG = G + 0x000000;
        xG = xG << 8;
        // printf("%x\n", xG);
        
        xB = B + 0x000000;
        xB = xB << 0;
        // printf("%x\n", xB);
        value = xR + xG + xB;
        // printf("0x%06X", value);

        printf("조정된 컬러의 R,G,B 값은 (%d, %d, %d)이고, 이는 0x%06X로 저장됩니다. \n", R, G, B, value);
        
        printf("계속 컬러를 조정하시겠습니까? (y/n) ");
        scanf(" %c", &answer);
        printf("\n");

        if(answer == 'y'){} 
        else if(answer == 'n'){ 
        printf("==========================\n");
        break; 
        }  
    }

    return 0;
}