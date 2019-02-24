#include<stdio.h>

int main(void)
{
    int a = 123;
    int *digits = &a;
    int digitsSize = 3;

    int i = 0;
    for(i = digitsSize; i >= 0; i--)
    {
        printf("%d\n", digits[i]);
        /*if(dig[i] == 9)
        {
            dig[i] = 0;
        }
        else
        {
            dig[i] += 1;
            break;
        }*/
    }

    printf("%d\n", *digits);
    return 0;
}
