#include<stdio.h>

int main(void)
{
    short arr[] = {0x1, 0x3, 0x5, 0x7, 0x9, 0xB, 0xD};
    printf("sizeof: arr = %lu\n", sizeof(arr));
    printf("*(arr + 3) = %u\n", *(arr + 3));
    printf("*(((int *)arr) + 1) = %x\n", *(((int *)arr) + 1));
    printf("*(short *)(((int *)arr) + 1) = %x\n", *(short *)(((int *)arr) + 2));
    return 0;
}
