#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
#include <memory>
#include <stack>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> S;
  for(int i = 0; i < n; i++) {
    int s;
    cin >> s;
    S.insert(s);
  }
  // vector<int> S(n);
  // for(auto& v : S) {
  //   cin >> v;
  // }
  int q;
  cin >> q;
  vector<int> T(q);
  for(auto& v : T) {
    cin >> v;
  }

  int C = 0;
  for(auto t : T) {
    for(auto s : S) {
      if(t == s) C++;
    }
  }

  printf("%d\n", C);
}

