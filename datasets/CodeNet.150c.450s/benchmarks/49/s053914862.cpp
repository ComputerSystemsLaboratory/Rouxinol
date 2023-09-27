//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstring>
#include <climits>
#define INF INT_MAX / 2
using namespace std;

typedef pair<double, double> P;
typedef long long ll;

int main(void) {
  int n;

  while (cin >> n,n!=0) {
    int mi = INF, ma = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int p;
      cin >> p;
      sum += p;
      mi = min(mi, p);
      ma = max(ma, p);
    }
    sum -= (mi + ma);
    cout << sum / (n-2) << endl;
  }
}

// command ctrl 上下
// command D
// command caps G → '' ""