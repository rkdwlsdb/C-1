#include<stdio.h>
#include<string.h>

int convCase(char * str, int len)
{
    char NewStr[256];
    const int diff = 'a' - 'A';

    for(int i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            NewStr[i] = str[i]-diff;
        else if(str[i]>='A' && str[i]<='Z')
            NewStr[i] = str[i]+diff;
        else 
            NewStr[i] = str[i];
    }
    NewStr[strlen(NewStr)-1] = 0;
    printf("%s\n", NewStr);
    return 0; 
}

int main(void)
{
    char str[256];

    printf("Input> ");
    fgets(str, sizeof(str), stdin); 
    str[strlen(str)-1] = 0;
    printf("Output> ");
    convCase(str, strlen(str));
    return 0;
}