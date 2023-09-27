#include <cstdio>
using namespace std;
int n,A[20];
int solve(int i,int m){
  if(m==0)return 1;
  if(i>=n)return 0;
  int res=solve(i+1,m)||solve(i+1,m-A[i]);
  return res;
}
int main(){
  int q,M;
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&A[i]);
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d",&M);
    if(solve(0,M))printf("yes\n");
    else printf("no\n");
  }
  return 0;
}