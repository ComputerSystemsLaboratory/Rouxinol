#include <stdio.h>
#include <string.h>

int main()
{
  int len1, len2, i, j = 0, k;
  char str1[100];
  char str2[100];
  char str3[200];

  scanf("%s", str1);
  scanf("%s", str2);
  
  sprintf(str3,"%s%s\n",str1,str1);
    
  if(strstr(str3,str2) != NULL){
    printf("Yes\n");
  } else{
    printf("No\n");
    }
  return 0;
}