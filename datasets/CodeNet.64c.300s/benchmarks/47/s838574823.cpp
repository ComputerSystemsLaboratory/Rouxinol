#include<cstdio>
#include<cstring>
int main(){
  int num[500];
  int i,n,max=0;
  memset(num,0,sizeof(num));
  while((scanf("%d",&n))!=EOF){
    num[n]++;
    if(num[n]>max)max=num[n];
  }
  for(i=0;i<101;i++)if(max == num[i])printf("%d\n",i); 
}