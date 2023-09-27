#include <bits/stdc++.h>
#define N 101
using namespace std;
int A[N];

int mem[N][N],used[N][N];
int dfs(int l,int r){
  if(l == r) return 0;
  if(r - l == 1) return A[l]*A[r]*A[r+1];
  if(used[l][r]++) return mem[l][r];

  int res = 1e9;  
  for(int i=l;i<r;i++){
    int a = dfs(l,i);
    int b = dfs(i+1,r);
    int c = A[l] * A[i+1] * A[r+1];
    res = min(res,a + b + c);
  }
  return mem[l][r] = res;
}

int main(){
  
  int n;
  cin>>n;
  for(int i=0,cnt=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if(i == 0) A[cnt++] = a;
    A[cnt++] = b;
  }

  cout<<dfs(0,n-1)<<endl;


  return 0;
}