#include<stdio.h>

#define STR "System"

int main(void)
{
    char arr[8] = "abcdefg";
    printf("%d\n", sizeof(STR));
    printf("%d\n", sizeof(arr));


    if(sizeof(arr) - sizeof(STR))
        printf("success\n");

    printf("%d\n", sizeof(arr) - sizeof(STR));
    return 0;
}
