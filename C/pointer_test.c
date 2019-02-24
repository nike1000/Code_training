#include<stdio.h>

int main()
{
    char s[] = "0113256";
    char *p = s;

    printf("%c\n", *p++);    // get value, print, move right   index: 0, output: 0, index: 1
    printf("%c\n", *(p++));  // move right, get value, print   index: 2, output: 1
    printf("%c\n", (*p)++);  // get value, print, value add    index: 2, output: 1, value: 2
    printf("%c\n", *++p);    // move right, get value, print   index: 3, output: 3
    printf("%c\n", *(++p));  // move right, get value, print   index: 4, output: 2
    printf("%c\n", ++*p);    // get value, value add, print    index: 4, output: 3, value: 3
    printf("%c\n", ++(*p));  // get value, value add, print    index: 4, output: 4, value: 4

    printf("\n");
    printf("%s\n", s);
}
