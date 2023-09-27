#include <iostream>
using namespace std;

int dfs(int idx, int rem, int res){
  if(rem == 0 && res == 0){
    return 1;
  }
  if(idx < 0 || rem < 0 || res < 0){
    return 0;
  }
  return dfs(idx-1, rem-1, res-idx) + dfs(idx-1, rem, res);
}

int main(){
  int n, s;
  while(true){
    cin >> n >> s;
    if(n == 0 && s == 0){
      break;
    }
    cout << dfs(9, n, s) << endl;
  }
  return 0;
}