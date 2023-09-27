#include <stdio.h>
#include <string.h>

char *reverse(char *s)
{
    int i;
    char tmp;
    for(i=0; i<strlen(s)/2; i++){
        tmp = s[i];
        s[i] = s[strlen(s)-1-i];
        s[strlen(s)-1-i] = tmp;
    }
    return s;
}

int main()
{

    char str[21];

    scanf("%s", str);
    printf("%s\n", reverse(str));

    return 0;
}