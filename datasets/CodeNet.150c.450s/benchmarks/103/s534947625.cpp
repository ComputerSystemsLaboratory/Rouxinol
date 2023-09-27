#include<cstdio>
#include<algorithm>
using namespace std;
int n,s;
int solve(int i,int c,int sum){
  if(i<=0){
    if(sum==s) return 1;
    else return 0;
  }
  int res=0;
  for(int j=c;j<10;j++){
    res+=solve(i-1,j+1,sum+j);
  }
  return res;
}
int main(void){
  while(1){
    scanf("%d %d",&n,&s);
    if(!n && !s) break;
    printf("%d\n",solve(n,0,0));
  }
}