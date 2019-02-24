#include<stdio.h>

int main(void)
{
    int a[]={6,7,8,9,10};
    int *p=a;
    *(p++)+=123;
    *(++p)+=123;

    int i;
    for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
