#include<cstring>
#include<cstdio>
using namespace std;

int main() {
    char s[201], p[101];
    char ch[101];
    
    scanf("%s", s);
    scanf("%s", p);
    strcpy(ch, s);
    strcat(s,ch);
    if (strstr(s, p) == NULL) printf("No\n");
    else printf("Yes\n");
    
    return 0;
    
    
}

