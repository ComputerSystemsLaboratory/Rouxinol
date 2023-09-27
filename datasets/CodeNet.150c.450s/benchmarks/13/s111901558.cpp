#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    char s[201], t[101], p[101];

    scanf("%s %s", s, p);
    strcpy(t, s);
    strcat(s, t);

    if(strstr(s, p) == NULL) {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }
    return 0;
}