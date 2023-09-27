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
typedef pair<int, int> P;
int main()
{
  ll N, M;
  while(cin >> N >> M, N || M) {
    vector<P> vp(N);
    ll sum = 0;
    FOR(i,0,N) {
      int d, p; cin >> d >> p;
      vp[i] = P(p, d);
      sum += p * d;
    }
    sort(vp.rbegin(), vp.rend());
    FOR(i,0,N) {
      int p = vp[i].first;
      int d = vp[i].second;
      if(M >= d) {
        M -= d;
        sum -= d * p;
      } else {
        sum -= M * p;
        break;
      }
    }
    cout << sum << endl;
  }
  return 0;
}