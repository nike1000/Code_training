#include<stdio.h>

struct S1 {
    char c[4];
    char *s;
} s1 = {"abc", "def"};

struct S2 {
    char *s;
    struct S1 s1;
} s2 = {"ghi", {"jkl", "mno"}};

int main(void)
{
    char *str = "abc";
    str = "def";
    char str2[] = {"kshuang"};

    //printf("%s\n", s2.s1.c + 1);
    printf("%s\n", str2);
    return 0;
}
