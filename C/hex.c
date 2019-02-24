#include<stdio.h>

int main()
{
    int x = 0x61;
    char y = '\x61';
    char z = '\x80';
    int A = 65;
    char cat[] = { 0x63, 0x61, 0x74, 0x00 };

    printf("%s\n", cat);
    printf("%d\n", x);
    printf("%x\n", x);
    printf("%c\n", x);
    printf("%x\n", A);
    printf("%d\n", y);
    printf("%x\n", y);
    printf("%c\n", y);
    printf("%d\n", z);
    printf("%x\n", z);
    printf("%c\n", z);

    return 0;
}
