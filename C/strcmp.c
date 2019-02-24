#include<stdio.h>

int strcmp1(char *source, char * dest);

int main(void)
{
    char *str1 = "Hello ksh";
    char *str2 = "Hello ksh";
    char *str3 = "Hello nike1000";

    printf("%d\n", strcmp1(str1, str2));
    printf("%d\n", strcmp1(str1, str3));
    return 0;
}

int strcmp1(char *source, char * dest)
{
    int i = 0, j = 0;

    while(source[i] != '\0' || dest[i] != '\0')
    {
        if(source[i] != dest[i]) return -1;

        i++;
        j++;
    }

    return 0;
}
