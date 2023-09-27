#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,tarop=0,hanakop=0;
  char taro[100],hanako[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",taro,hanako);
    if(strcmp(taro,hanako)==0){
      tarop++;
      hanakop++;
    }
    if(strcmp(taro,hanako)>0){
      tarop+=3;
    }
    if(strcmp(taro,hanako)<0){
      hanakop+=3;
    }
  }
  printf("%d %d\n",tarop,hanakop);
  return 0;
}
            