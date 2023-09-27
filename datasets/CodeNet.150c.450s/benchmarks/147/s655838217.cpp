#include <iostream>
#include <map>
#define rep(i, n) for(int i=0;i<(n);i++)
using namespace std;

int N;
map<int, int> mp;

int calc(int x, int y, int z) {
  int res = x*x + y*y + z*z + x*y + y*z + z*x;
  return res;
}

int main() {
  cin >> N;
  
  //初期化
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 100; j++) {
      for (int k = 1; k <= 100; k++) {
  	    int f = calc(i, j, k);
        mp[f]++;
      }
    }  
  }
  
  for (int i = 1; i <= N; i++) {
    cout << mp[i] << endl;
  }
}