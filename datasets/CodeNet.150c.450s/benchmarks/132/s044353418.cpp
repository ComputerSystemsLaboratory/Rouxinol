#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#define FOR(i, a, b)  for(int i=a; i<b; ++i)
#define rFOR(i, a, b) for(int i=a-1; i>=b; --i)
#define REP(i, n) for(int i=0; i<n; ++i)
#define rREP(i, n) for(int i=n-1; i>=0; --i)
#define all(a)  a.begin(), a.end()
using namespace std;

struct POINT{
  int x, y;

  bool operator<(const POINT& right) const {
    return x < right.x;
  }
};

int main(){
  int n, p;
  while(true){
    cin >> n >> p;
    int ans = p;
    bool flag = false;
    if(n == 0 && p == 0) break;
    int have[n];
    REP(i, n) have[i] = 0;

    while(true){
      REP(i, n){
        if(p > 0){
          have[i]++;
          p--;
          if((p == 0) && (have[i] == ans)){
            cout << i << endl;
            flag = true;
          }
        }else if(p == 0){
          p += have[i];
          have[i] = 0;
        }
      }
      if(flag == true)  break;
    }
  }

  return 0;
}

