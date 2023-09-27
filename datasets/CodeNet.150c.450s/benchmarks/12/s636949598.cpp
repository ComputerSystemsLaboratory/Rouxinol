#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using LL = long long;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<long> VL;

int main() {
  int n; cin >> n;
  vector<int> A(n+1);
  rep(i, n) {
    cin >> A.at(i+1);
  }

  for(int i=1; i<n+1; i++) {
    cout << "node " << i << ": " << "key = " << A.at(i) << ", ";
    if (i !=1 ) {
      cout << "parent key = " << A.at(i/2) << ", ";
    }
    if (2*i <= n) {
      cout << "left key = " << A.at(i*2) << ", ";
    }
    if (2*i+1 <= n) {
      cout << "right key = " << A.at(i*2+1) << ", ";
    }
    cout << endl;
  }
}

