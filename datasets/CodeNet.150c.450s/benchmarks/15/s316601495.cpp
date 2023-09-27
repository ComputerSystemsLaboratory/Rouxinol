#include<stdio.h>

int main(){
  int s_num,t_num,i,j=0,count=0,key;
  int s[100001],t[10000];

  scanf("%d",&s_num);
  for(i = 0; i < s_num; i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&t_num);
  for(i = 0; i < t_num; i++){
    scanf("%d",&t[i]);
  }

  for(i = 0; i < t_num; i++){
    key = t[i];
    s[s_num]=key;
    while(s[j] != key){
      j++;
    }
    if(j != s_num)count++;
    j=0;
  }

  printf("%d\n",count);
  return 0;
}