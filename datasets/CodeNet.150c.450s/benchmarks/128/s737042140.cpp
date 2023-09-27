#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
   char str[21];
   scanf("%s",str);
  int l=strlen(str);
   for(char* p=str+l-1;p>=str;p--)
      printf("%c",*p);
   printf("\n");
   return 0;

}