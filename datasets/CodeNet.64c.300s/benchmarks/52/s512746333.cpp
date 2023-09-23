#include<bits/stdc++.h>
using namespace std;

int dfs(int n,int s,int i){
  if(n == 0){
    if(s == 0)return 1;
    else return 0;
  }
  if(s -i < 0)return 0;
  if(i > 9 || n <= 0)return 0;

  return dfs(n,s,i + 1) + dfs(n - 1,s - i,i + 1);
}

int main(){
  int n,s;
  
  while(cin >> n >> s,n|s){
    cout << dfs(n,s,0) << endl;
  }
}