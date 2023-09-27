#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define LENGTH 100

int cnt=0;

void dfs(int sum, int s, int n, int i){
  if(sum==s && n==0){
    cnt++;
  }

  if(n<=0 || sum>s || i>9){
    return;
  }
  
  
  dfs(sum+i, s, n-1, i+1);
  dfs(sum, s, n, i+1);
}

int main(){
  int n;
  int s;
  while(cin >> n >> s){
    if(n==0 && s==0){
      break;
    }

    dfs(0, s, n, 0);
    cout << cnt << endl;
    cnt = 0;
  }
}