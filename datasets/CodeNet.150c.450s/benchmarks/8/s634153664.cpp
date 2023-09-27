#include <stdio.h>
#include <string.h>

int main(void)
{
  int n, hanako_p=0, taro_p=0,i;
  char hanastr[101], tarostr[101];
  scanf("%d", &n);
  for(i=0;i<n;i++) {
    scanf("%s", tarostr);
    scanf("%s", hanastr);
    if(strcmp(tarostr,hanastr)==0) {
      hanako_p++;taro_p++;
    }
    else if(strcmp(tarostr, hanastr)>0){
      taro_p += 3;
    }
    else if(strcmp(tarostr, hanastr)<0){
      hanako_p +=3;
    }
  }
  printf("%d %d\n", taro_p, hanako_p);
  return 0;
}