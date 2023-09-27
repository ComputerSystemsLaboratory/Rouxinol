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
#include <deque>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int R, C;
  while(cin>>R>>C,R||C) {
    vector<vector<int> > v(R, vector<int>(C, 0));
    FOR(i,0,R) FOR(j,0,C) cin >> v[i][j];
    int ans = 0;
    FOR(i,0,1<<R) {
      bool ura[10]; CLR(ura);
      FOR(j,0,R) {
        if((i>>j)&1) {
          ura[j] = true;
        }
      }
      int cnt = 0;
      FOR(j,0,C) {
        int cnt2 = 0;
        FOR(k,0,R) {
          cnt2 += v[k][j] == ura[k];
        }
        cnt += max(cnt2, R - cnt2);
      }
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  }
  return 0;
}