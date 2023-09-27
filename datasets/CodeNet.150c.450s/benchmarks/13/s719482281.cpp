#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main() {
    
    char str1[500], str2[501], str3[501];

    scanf("%s %s", str1, str2);
    
    strcpy(str3, str1);
    
    strcat(str1, str3);

    if (strstr(str1, str2) == NULL ) {
        
        printf("No\n");

    } else {
        
        printf("Yes\n");
    
    }
}


