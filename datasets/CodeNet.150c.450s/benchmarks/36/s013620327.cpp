#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int D;

int main() {
  while (cin >> D) {
    ll area = 0;
    int x = 0;
    for (int i = 0; i < 600/D; i++) {
      area += (D*i)*(D*i)*D;
    }
    cout << area << endl;
  }
}

