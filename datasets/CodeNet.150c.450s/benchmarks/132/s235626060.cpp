#include<iostream>
using namespace std;
#define MAX 50

int main()
{
  while(true){
    int n,p;
    scanf("%d%d",&n,&p);
    if(n==0&&p==0)break;
    int pebbles[MAX]={0,};
    int left=p;
    int now=0;
    int winner=-1;
    while(winner<0){
      if(left>0){
	--left;
	pebbles[now]++;
      }else{
	left+=pebbles[now];
	pebbles[now]=0;
      }
      now++;
      if(now==n)now=0;
      for(int i=0;i<MAX;++i){
	if(pebbles[i]==p){
	  winner=i;
	  break;
	}
      }
    }
    printf("%d\n",winner);
  }
  return 0;
}