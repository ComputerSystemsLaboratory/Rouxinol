#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define INF (2 << 28)
#define fr first
#define sc second
using namespace std;

typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

int main(){
  
  int N;
  while(cin >> N, N) {
    vector< iP > pos(N + 1);
    pos[0] = iP(0, 0);
    for(int i = 1; i < N; i++) {
      int n, d; cin >> n >> d;
      iP p = pos[n];
      if(d == 0) {
        pos[i].fr = p.fr - 1;
        pos[i].sc = p.sc;
      } else if(d == 1) {
        pos[i].fr = p.fr;
        pos[i].sc = p.sc + 1;
      } else if(d == 2) {
        pos[i].fr = p.fr + 1;
        pos[i].sc = p.sc;
      } else {
        pos[i].fr = p.fr;
        pos[i].sc = p.sc - 1;
      }
    }
    int minx = INF,miny = INF, maxx = -INF, maxy = -INF;
    for(int i = 0; i < N; i++) {
      minx = min(minx, pos[i].fr);
      miny = min(miny, pos[i].sc);
      maxx = max(maxx, pos[i].fr);
      maxy = max(maxy, pos[i].sc);
    }
    cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
  }
}