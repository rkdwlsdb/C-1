#include<stdio.h>

int main(void)
{
    int color, R, G, B, value1, value2, value3, value;
    color = 0xFF2234;

    R = color & 0xff0000;
    printf("%x\n", R);
    G = color & 0x00ff00;
    printf("%x\n", G);
    B = color & 0x0000ff;
    printf("%x\n", B);
    value = R + G + B;
    printf("0x%06X \n", value);

//     printf("%x", R);
//     printf("%x", G);
//     printf("%x", B);
//     printf("입력된 컬러의 R,G,B 값은 (%d, %d, %d)입니다. \n", R, G, B);


//     // value1 = 255 & 0xff0000;
//     // value1 = value1 << 16;
//     // value2 = 34 & 0x00ff00;
//     // value2 = value2 << 8;
//     // value3 = 52 & 0x0000ff;
//     // value3 = value3 << 0;
 
//     value = R & G & B;
    
//     printf("%x", R);
//     printf("%x", G);
//     printf("%x", B);

//     printf("0x%06X", value);
//     printf("\n");
    
    return 0;
}


