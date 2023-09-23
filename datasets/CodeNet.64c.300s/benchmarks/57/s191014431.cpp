#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

#define rep(i, n) for(int i = 0 ; i < n ; i++)

int R, C;
bool field[11][10010];

int solve(int bits){
  rep(i, R){
    if(bits >> i & 1){
      rep(j, C){
	field[i][j] = !field[i][j];
      }
    }
  }
  
  int ret = 0;
  rep(j, C){
    int osenbei = 0;
    rep(i, R){
      if(field[i][j]) osenbei++;
    }
    ret += max(osenbei, R-osenbei);
  }
  
  rep(i, R){
    if(bits >> i & 1){
      rep(j, C){
	field[i][j] = !field[i][j];
      }
    }
  }
  return ret;
}

int main(){
  while(cin >> R >> C, R|C){
    rep(i, R) rep(j, C) cin >> field[i][j];
    
    int ans = 0;
    rep(i, (1<<R)){
      ans = max(ans, solve(i));      
    }
    cout << ans << endl;
  }  
  return 0;
}





  