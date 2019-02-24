#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
    int i, j;
    char c;
    for(i=0, j = strlen(str)-1; i<j; ++i, --j)
        c = str[i], str[i]=str[j], str[j]=c;
}

int main()
{
    //char *str = "12345";
    char str[] = "12345";
    reverse(str);
    puts(str);
    return 0;
}
