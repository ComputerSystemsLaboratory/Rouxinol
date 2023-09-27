#include<stdio.h>
int main(){
  int n,sum=0,s,i,mx=0,mn=1000;
  int av;
  while(scanf("%d",&n)&&n!=0){
    n,s,i,sum=0,mx=0,mn=1000;   
    for(i=0;i<n;i++){
      scanf("%d",&s);
      sum+=s;
      if(mx<s)
	mx=s;
      if(mn>s)
	mn=s; 
    }
    sum=sum-(mn+mx);
    av=sum/(n-2);
    printf("%d\n",av);
  }
  
  return 0;
}