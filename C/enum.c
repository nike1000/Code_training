#include<stdio.h>

enum Month {JAN = 2, FEB, MAR = 5, APR, MAY};
int main(void)
{
    printf("%d, %d, %d, %d, %d\n", JAN, FEB, MAR, APR, MAY);
    return 0;
}
