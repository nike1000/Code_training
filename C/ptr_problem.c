#include<stdio.h>

int main()
{
    char *pc1;
    char *pc2 = 0;
    *pc1 = 'a';
    *pc2 = 'b';

    printf("%c, %c\n", *pc1, *pc2);

    return 0;
}
