#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define P pair<int, int>
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
#define int long long

signed main() {
  int H, W;
  while(cin >>H >>W && H){
    int T = H * H + W * W;
    int ansh = 200, answ = 200, anst = 40000;
    FOR(h, 1, 200){
      FOR(w, h + 1, 200){
        int t = h * h + w * w;
        if(t < T || (t == T && h <= H)) continue;
        if(t < anst || (t == anst && h < ansh)){
          anst = t;
          ansh = h;
          answ = w;
        }
      }
    }
    cout <<ansh <<" " <<answ <<endl;
  }
  return 0;
}