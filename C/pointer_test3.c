#include<stdio.h>

int main(void)
{
    char a[] = {'a', 'b', 'c', 'd', 'e'};
    char *cp = a + 1;

    printf("%c\n", *cp);

    short *ap = (short *)cp;
    printf("%X\n", *ap);
    return 0;
}
