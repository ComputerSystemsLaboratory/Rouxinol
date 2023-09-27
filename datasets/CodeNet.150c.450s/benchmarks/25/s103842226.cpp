#include<cstdio>
int main(){
  int count[123]={};
  char c;
  while(scanf("%c",&c)!=EOF){
    if(c>96)count[c]++;
    else count[c+32]++;
  }
  for(int i=97;i<123;i++)printf("%c : %d\n",i,count[i]);
  return 0;
}