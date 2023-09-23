#include<cstdio>
#include<algorithm>
using namespace std;
int d[5005];
int main(void){
  while(1){
    int n;
    scanf("%d",&n);
    if(!n) break;
    for(int i=0;i<n;i++){
      scanf("%d",&d[i]);
      if(i) d[i]+=d[i-1];
    }
    int sum=d[0];
    for(int i=0;i<n;i++){
      sum=max(d[i],sum);
      for(int j=0;j<i;j++){
	sum=max(d[i]-d[j],sum);
      }
    }
    printf("%d\n",sum);
  }
}