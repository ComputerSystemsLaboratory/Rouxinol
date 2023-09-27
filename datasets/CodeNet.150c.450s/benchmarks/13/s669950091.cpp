#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
int main(){
    char str3[101],str2[101],str1[202];
    scanf("%s",str1);
    scanf("%s",str3);
    strcpy(str2, str1);
    strcat(str1, str2);
    if(strstr(str1, str3) == NULL){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}
