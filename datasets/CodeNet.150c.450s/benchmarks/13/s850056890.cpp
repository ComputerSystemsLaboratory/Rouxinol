#include<iostream>
#include<cstring>
#include<cstdio>

int main(){
    char str1[201]={},str2[101]={},str3[101]={};
    scanf("%s %s",str1,str2);
    strcpy(str3,str1);
    strcat(str1,str3);
    if(strstr(str1,str2)==NULL) printf("No\n");
    else printf("Yes\n");
    return 0;
}
