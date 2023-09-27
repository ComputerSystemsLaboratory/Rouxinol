#include <iostream>
#include <algorithm>
#define MAX_RANGE 1500
#define MAX_VALUE 1000
using namespace std;

int h[MAX_RANGE], w[MAX_RANGE];

int htype[MAX_VALUE * MAX_RANGE + 1], wtype[MAX_VALUE * MAX_RANGE + 1];

void calcAns(int hsum, int wsum) {
  int ans = 0;
  for (int i = 1; i <= min(hsum, wsum); i++)
    ans += htype[i] * wtype[i];
  cout << ans << endl;
}

void calcTypeNumber(int n, int m) {
  for (int i = 0; i < n; i++) {
    int temp = h[i];
    htype[temp]++;
    for (int j = i + 1; j < n; j++) {
      temp += h[j];
      htype[temp]++;
    }
  }

  for (int i = 0; i < m; i++) {
    int temp = w[i];
    wtype[temp]++;
    for (int j = i + 1; j < m; j++) {
      temp += w[j];
      wtype[temp]++;
    }
  }
}

void initArray() {
  for (int i = 0; i < MAX_VALUE * MAX_RANGE + 1; i++) {
    htype[i] = wtype[i] = 0;
  }
}

int main() {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) return 0;

    for (int i = 0; i < n; i++)
      cin >> h[i];
    for (int i = 0; i < m; i++)
      cin >> w[i];

    int hsum = 0, wsum = 0;
    for (int i = 0; i < n; i++)
      hsum += h[i];
    for (int i = 0; i < m; i++)
      wsum += w[i];

    initArray();

    calcTypeNumber(n, m);
    
    calcAns(hsum, wsum);
  }
}