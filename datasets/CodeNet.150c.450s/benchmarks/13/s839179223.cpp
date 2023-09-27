#include <cstdio>
#include <cstring>
using namespace std;
int main(void){
    char str1[101], str2[101], str3[201];
    scanf("%s %s", str1, str2);
    strcpy(str3, str1);
    strcat(str3, str1);
    if(strstr(str3, str2)) printf("Yes\n");
    else printf("No\n");

    return 0;
}

