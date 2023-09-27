#include <bits/stdc++.h>
#define N 1001
using namespace std;
int n,m;
string s1,s2;

int mem[N][N],used[N][N];
int dfs(int I,int J){
  if(I == n) return m-J;
  if(J == m) return n-I;
  if(used[I][J]++) return mem[I][J];
  int res = 1e9;
  res = min(res,1+dfs(I+1,J));//insert
  res = min(res,1+dfs(I,J+1));//erase
  res = min(res,(s1[I]!=s2[J])+dfs(I+1,J+1));//replace or same
  return mem[I][J] = res;  
}


int main(){
  cin>>s1>>s2;
  n = s1.size();
  m = s2.size();
  cout<<dfs(0,0)<<endl;;
  return 0;
}