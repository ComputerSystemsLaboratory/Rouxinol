#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    char s[100], p[100], z[300] = "";
    scanf("%s", s);
    scanf("%s", p);
    strcat(z, s);
    strcat(z, s);

    printf("%s\n", strstr(z, p) ? "Yes" : "No");
}