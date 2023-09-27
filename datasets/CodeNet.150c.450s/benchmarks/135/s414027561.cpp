
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
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  while(cin>>n>>m,n||m) {
    int H[n+1], W[m+1];
    H[0] = 0, W[0] = 0;
    FOR(i,0,n) {
      int in; cin >> in;
      H[i+1] = H[i] + in;
    }
    FOR(i,0,m) {
      int in; cin >> in;
      W[i+1] = W[i] + in;
    }
    map<int, int> MAP;
    FOR(i,0,n+1) {
      FOR(j,i+1,n+1) {
        MAP[H[j]-H[i]]++;
      }
    }
    int ans = 0;
    FOR(i,0,m+1) {
      FOR(j,i+1,m+1) {
        if(MAP.count(W[j]-W[i])) ans += MAP[W[j]-W[i]];
      }
    }
    cout << ans << endl;
  }
  return 0;
}