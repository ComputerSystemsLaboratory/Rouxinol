#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<string>
#include<string.h>
using namespace std;
int main(){
    char str1[1000],str2[1000],str3[1000];
    scanf("%s %s",str1,str2);
    strcpy(str3,str1);
    strcat(str3,str1);
    if(strstr(str3,str2)==NULL){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
    
}


