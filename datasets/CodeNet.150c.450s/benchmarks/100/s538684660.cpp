#include<bits/stdc++.h>
using namespace std;
int n;
long long dfs(long long  i){
  if(i==1)
    return 1;
  else if(i==0)
    return 0;
  return i*dfs(i-1);
}
  int main(){  
  cin>>n;
  cout<<dfs(n)<<endl;
  return 0;
  
}