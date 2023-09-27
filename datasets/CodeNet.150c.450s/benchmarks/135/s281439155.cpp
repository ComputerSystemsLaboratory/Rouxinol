#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back
#define MAX 1500

using namespace std;

int memoH[MAX+1][MAX+1];
int memoW[MAX+1][MAX+1];
int countH[MAX*1000+1];
int countW[MAX*1000+1];

int main() {
  int n, m, res;
  while (cin >> n >> m, n | m) {
    res = 0;
    for (int i = 0; i <= MAX; i++) {
      for (int j = 0; j <= MAX; j++) {
        memoH[i][j] = memoW[i][j] = -1;
      }
    }
    for (int i = 0; i <= MAX*1000; i++) {
      countH[i] = countW[i] = 0;
    }
    for (int i = 0; i < n; i++) {
      cin >> memoH[i][i];
    }
    for (int i = 0; i < m; i++) {
      cin >> memoW[i][i];
    }
    for (int j = 0; j < n; j++) {
      for (int i = 0; i < n-j; i++) {
        if (memoH[i+1+j][i+1+j] == -1) break;
        memoH[i][i+1+j] = memoH[i][i+j] + memoH[i+1+j][i+1+j];
      }
    }
    for (int j = 0; j < m; j++) {
      for (int i = 0; i < m-j; i++) {
        if (memoW[i+1+j][i+1+j] == -1) break;
        memoW[i][i+1+j] = memoW[i][i+j] + memoW[i+1+j][i+1+j];
      }
    }
    for (int i = 0; i < MAX; i++) {
      for (int j = i; j < MAX; j++) {
        if (memoH[i][j] != -1) countH[memoH[i][j]]++;
        if (memoW[i][j] != -1) countW[memoW[i][j]]++;
      }
    }
    for (int i = 0; i <= MAX*1000; i++) {
      res += countH[i]*countW[i];
    }
    cout << res << el;
  }
}