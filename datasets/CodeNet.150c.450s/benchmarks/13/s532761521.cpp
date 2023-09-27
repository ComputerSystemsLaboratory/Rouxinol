#include <cstdio>
#include <cstring>

int main () {
    char s[202], p[100];
    scanf("%s", s);
    scanf("%s", p);
    sprintf(s, "%s%s", s, s);
    if (strstr(s, p)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}