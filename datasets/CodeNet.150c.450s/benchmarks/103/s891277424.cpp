#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int ans, s;

void dfs(int begin, int depth, int sum) {
  if(depth == 0){
    if(s == sum){
      ans++;
    }
    return;
  }
  for(int i = begin+1 ; i <= 9 ; i++){
    dfs(i, depth-1, sum+i);
  }
}

int main(){
  int n;
  while(cin >> n >> s){
    if(n == 0 && s == 0) break;
    ans = 0;
    for(int i = 0 ; i <= 9 ; i++){
      dfs(i, n-1, i);
    }
    cout << ans << endl;
  }
  return 0;
}