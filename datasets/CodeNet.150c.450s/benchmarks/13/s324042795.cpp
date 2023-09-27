#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <cstring>
using namespace std;

int main(){
char str1[100],str2[100],str3[200];
scanf("%s\n%s", str1, str2);

int length = strlen(str1);
strcpy(str3, str1); 
strcat(str3, str1);  // 文字列 str1 に文字列 str2 を連結する

if ( strstr(str3, str2) == NULL ) printf("No\n");
else printf("Yes\n");

return 0;
}
