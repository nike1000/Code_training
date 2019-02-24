#include<stdio.h>

int main(void)
{
    int array[20];
    char str[] = "hello";
    char *ptr = str;

    printf("sizeof char = %lu\n", sizeof(char));
    printf("sizeof short = %lu\n", sizeof(short));
    printf("sizeof int = %lu\n", sizeof(int));
    printf("sizeof long = %lu\n", sizeof(long));
    printf("sizeof float = %lu\n", sizeof(float));
    printf("sizeof double = %lu\n", sizeof(double));
    printf("sizeof long double = %lu\n", sizeof(long double));
    printf("sizeof array = %lu\n", sizeof(array));
    printf("sizeof ptr = %lu\n", sizeof(ptr));
    printf("sizeof str = %lu\n", sizeof(str));

    printf("length of array = %lu\n", sizeof(array) / sizeof(array[0]));

    return 0;
}
