#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strStr(char*, char*);

int main(void)
{
    char *haystack = "a";
    char *needle = "a";
    printf("%d\n", strStr(haystack, needle));
    return 0;
}


int strStr(char* haystack, char* needle)
{
    char* ptrH = haystack;
    char* ptrN = needle;
    int i = 0;

    for(i = 0; i <= (int)(strlen(haystack) - strlen(needle)); i++) {
        ptrH = haystack + i;
        ptrN = needle;
        printf("%d\n", strlen(haystack) - strlen(needle));
        while(*ptrH == *ptrN) {
            ptrH += sizeof(char);
            ptrN += sizeof(char);
            printf("Same: %c, %c\n", *ptrH, *ptrN);
        }

        if(*ptrN == '\0') return i;
    }

    return -1;
}
