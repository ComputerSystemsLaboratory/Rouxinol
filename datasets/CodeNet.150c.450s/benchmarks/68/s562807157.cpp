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

int main()
{
  int n;
  while(cin >> n) {
    if(n == 0) return 0;
    int a[n];
    FOR(i,0,n) scanf("%d", a+i);
    sort(a, a + n);
    int ans = 1000000000;
    FOR(i,0,n-1) ans = min(ans, a[i+1] - a[i]);
    cout << ans << endl;
  }
  return 0;
}