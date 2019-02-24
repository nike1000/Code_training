#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "abcde";
    char *str2 = "abc";

    printf("%d, %d\n", strlen(str1), strlen(str2));
    printf("%d, %d\n", sizeof(str1), sizeof(str2));

    return 0;
}
