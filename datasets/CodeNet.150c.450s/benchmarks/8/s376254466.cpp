#include<stdio.h>
#include<string.h>
int main(){
  char s1[101],s2[101];
  int n,i,taro=0,hana=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){ 
    scanf("%s %s",s1,s2);
    if(strcmp(s1,s2)==0){ 
      taro++;
      hana++;
    }
    if(strcmp(s1,s2)>0){ 
      taro=taro+3;
    }
    if(strcmp(s1,s2)<0){ 
      hana=hana+3;
    }
  }
  printf("%d %d\n",taro,hana);
  return(0);
}