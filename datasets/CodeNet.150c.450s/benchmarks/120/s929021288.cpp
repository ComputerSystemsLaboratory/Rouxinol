#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
int R,C;
int up[11];
int a[11][10011];
int calc(int n,int sum){
  for(int i=0;i<C;i++){
    int pr=0;
    for(int j=0;j<R;j++){
      if( (n & (1<<j)) ){
	if(a[j][i]) pr--;
	else pr++;
      } else{
	if(a[j][i]) pr++;
	else pr--;
      }
    }
    sum += max(0,pr);
  }
  return sum;
}
int solve(int sum){
  int ret=sum;
  for(int i=1;i<(1<<R);i++){
    int ts = sum;
    for(int j=0;j<R;j++)
      if( (i & (1<<j)) ) ts+=up[j];
    ret=max(ret,calc(i,ts));
  }
  return ret;
}
int main(){
  while(1){
    scanf("%d %d",&R,&C);
    if(!R && !C) break;
    for(int i=0;i<R;i++)
      for(int j=0;j<C;j++)
	scanf("%d",&a[i][j]);
    int sum=0;
    memset(up,0,sizeof(up));
    for(int i=0;i<R;i++){
      int tp=0;
      for(int j=0;j<C;j++){
	if(!a[i][j]){
	  sum++;
	  up[i]--;
	}
	else{
	  up[i]++;
	}
      }
    }
    printf("%d\n",solve(sum));
  }
}