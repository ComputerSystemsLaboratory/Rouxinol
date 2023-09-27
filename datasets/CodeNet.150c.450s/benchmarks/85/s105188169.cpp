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
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
ll memo[111][111];
int n, a[111], b[111];
ll rec(int l, int r){
    if(memo[l][r] != 1e9) return memo[l][r];
    if(l == r) return memo[l][r] = 0;
    ll ret = 1e9;
    FOR(m, l, r){
      ret = min(ret, rec(l, m) + rec(m + 1, r) + a[l] * b[m] * b[r]);
    }
    return memo[l][r] = ret;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  FOR(i,0,n) cin >> a[i] >> b[i];
  FOR(i,0,111)FOR(j,0,111)memo[i][j]=1e9;
  cout << rec(0,n-1) << endl;
}
