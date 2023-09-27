#include <iostream>
using namespace std;
#include <cstdio>
#include <cctype>
#include <cstring>

int main() {
    char c1[201], c2[201], c3[101];
    scanf("%s %s",c1,c3);
    strcpy(c2,c1);
    strcat(c1,c2);

    if (strstr(c1,c3) == NULL) printf("No\n");
    else printf("Yes\n");

    return 0;
}