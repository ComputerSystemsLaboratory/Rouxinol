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
  int vy[4] = {0, -1, 0, 1};
  int vx[4] = {-1, 0, 1, 0};
  int N;
  while(cin >> N, N) {
    int y[N], x[N];
    y[0] = x[0] = 0;
    FOR(i,1,N) {
      int n, d;
      cin >> n >> d;
      y[i] = y[n] + vy[d];
      x[i] = x[n] + vx[d];
    }
    sort(x, x + N);
    sort(y, y + N);
    cout << x[N-1] - x[0] + 1 << " " << y[N-1] - y[0] + 1 << endl;
   }
   return 0;
}