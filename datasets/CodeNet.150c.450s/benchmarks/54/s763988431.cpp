#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,count=0;
  char w[10],t[1000];
  scanf("%s",w);
  int len=strlen(w);
  for(i=0;i<len;i++){
    if(w[i]<='Z' && t[i]>='A')w[i]+=32;
  }
  while(scanf("%s",t)){
    if(strcmp(t,"END_OF_TEXT")==0)break;
    int len=strlen(t);
    for(j=0;j<len;j++){
      if(t[j]<='Z' && t[j]>='A')t[j]+=32;
      
    }
    if(strcmp(w,t)==0)count++;
  }
  printf("%d\n",count);
  return 0;
}