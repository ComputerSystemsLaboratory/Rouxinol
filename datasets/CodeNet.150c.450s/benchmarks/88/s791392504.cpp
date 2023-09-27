#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define REP2(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(S) (S).begin(), (S).end()
typedef long long ll;

bool larger(int a, int b, int c, int d){
  if (a * a + b * b >  c * c + d * d) return true;
  if (a * a + b * b == c * c + d * d && a > c) return true;
  return false;
}

            
int main(){
  ios::sync_with_stdio(false);

  
  int H, W;
  while (cin >> H >> W && H + W > 0){

    int resH = 1000;
    int resW = 1000;
    REP2(h, 1, 1000){
      REP2(w, 1, 1000){
        if (h < w && larger(h, w, H, W) && larger(resH, resW, h, w)){
          resH = h;
          resW = w;
        }
      }
    }
    cout << resH << " " << resW << endl;
  }
  return 0;
}