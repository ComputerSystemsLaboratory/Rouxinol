#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;
typedef pair<int, int> P;
int main()
{
  map<char, P> v;
  v['N'] = P(1, 0);
  v['E'] = P(0, 1);
  v['S'] = P(-1, 0);
  v['W'] = P(0, -1);
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
    bool daiya[21][21];
    FOR(i,0,21) FOR(j,0,21) daiya[i][j] = false;
    FOR(i,0,n) {
      int x, y;
      cin >> x >> y;
      daiya[y][x] = true;
    }
    int m;
    cin >> m;
    int nx = 10, ny = 10;
    int cnt = 0;
    FOR(i,0,m) {
      char c;
      int d;
      cin >> c >> d;
      FOR(j,0,d) {
        ny += v[c].first;
        nx += v[c].second;
        if(daiya[ny][nx]) {
          cnt++;
          daiya[ny][nx] = false;
        }
      }
    }
    if(cnt == n) {
      puts("Yes");
    } else {
      puts("No");
    }
  }
  return 0;
}