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
  int n, k;
  while(cin >> n >> k, n || k) {
    int a[n]; FOR(i,0,n) cin >> a[i];
    int sum = 0;
    FOR(i,0,k) sum += a[i];
    int mx = sum;
    FOR(i,k,n) {
      sum += a[i];
      sum -= a[i-k];
      mx = max(mx, sum);
    }
    cout << mx << '\n';
  }
  return 0;
}