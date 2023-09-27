#include<bits/stdc++.h>
using namespace std;
 
int dfs(int n, int s, int k){
  if( !n )return ( s == 0 )? 1 : 0;
  int res = 0;
  for(int i=k; i<10; i++){
    res += dfs(n - 1, s - i, i + 1);
  }
  return res;
}

int main(){
  int n, s;
  while( cin >> n >> s, n ){
    cout << dfs(n, s, 0) << endl;
  }
}