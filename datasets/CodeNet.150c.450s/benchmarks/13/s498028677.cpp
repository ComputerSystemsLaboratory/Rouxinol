#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char s[200];
    char p[100];
    char c[100];
   
    scanf("%s %s",s, p);
    strcpy(c, s);
    strcat(s, c);
    
    if(strstr(s, p) == NULL){
        printf("No\n");
    } else {
        printf("Yes\n");
    }
        
    return 0;
}
