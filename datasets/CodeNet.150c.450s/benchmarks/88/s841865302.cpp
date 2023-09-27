#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <complex>

using namespace std;

#define MP make_pair

#define REP(i,n) for(int i=0;i<n;i++)

typedef long long LL;
typedef pair<int,int> PII;

int norm(int x, int y) {
  return x * x + y * y;
}

struct R {
  int h, w;
  R(int h, int w) :h(h), w(w) {}
  bool operator==(const R& other) {
    return h == other.h && w == other.w;
  }
};

bool operator<(const R& x, const R& y) {
  return (norm(x.h, x.w) == norm(y.h, y.w)) ? x.h < y.h : norm(x.h, x.w) < norm(y.h, y.w);
}


int main() {
  vector<R> arr;
  for (int x = 1; x <= 200; x++) {
    for (int y = x + 1; y <= 200; y++) {
      arr.push_back(R(x, y));
    }
  }
  sort(arr.begin(), arr.end());
  int h, w;
  while (true) {
    cin >> h >> w;
    if (h == 0 && w == 0) {return 0;}
    vector<R>::iterator i = find(arr.begin(), arr.end(), R(h, w));
    i++;
    cout << i->h << " " << i->w << endl;
  }
}