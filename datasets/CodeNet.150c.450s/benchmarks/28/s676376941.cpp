#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <functional>

using namespace std;

int
main() {
  int n,k;
  vector<int> w;

  cin >> n >> k;
  for (int i=0;i<n;++i) {
    int t;
    cin >> t;
    w.push_back(t);
  }

  // naive algorithm;
  // increment p ...
  uint64_t m = accumulate(begin(w), end(w), 0);
  auto est_p = (m / k);
  // cout << "est_p " << est_p << endl;
  
  auto calc = [](vector<int> & xs, int k, int p) -> bool{
    int wi=0;
    int i=0;
    for (; i<k; ++i) {
      int v = p;
      // cout << "wi = " << wi << " v = " << v << endl;
      while ( v - xs[wi] >= 0) {

	v -= xs[wi];
	wi++;
	if (wi == xs.size()) return true;
	// cout << "v = " << v << endl;
      }
    }
    return false;
  };

  auto ap = est_p;
  do {
    if (calc(w, k, ap)) {
      break;
    }
    ap++;
  } while (true);
  cout << ap << endl;
  
  return 0;
}