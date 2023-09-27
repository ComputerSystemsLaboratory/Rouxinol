#include <iostream>

using namespace std;

int main() {
  int n, m;
  while (true) {
    cin >> n >> m;
    if (n == 0 && m == 0) break;

    int t[n], h[n], sum = 0;
    int tsum = 0, hsum = 0;
    for (int i = 0; i < n; i++) {
      cin >> t[i];
      sum += t[i];
      tsum += t[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> h[i];
      sum += h[i];
      hsum += h[i];
    }

    if (sum%2 == 1) {
      std::cout << -1 << std::endl;
      continue;
    }

    int anst = -1, ansh = -1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
	if (tsum-t[i]+h[j] == hsum-h[j]+t[i] &&
	    (anst == -1 ||
	     t[anst]+h[ansh] > t[i]+h[j])) {
	  anst = i;
	  ansh = j;
	}
      }
    }

    if (anst == -1) {
      std::cout << -1 << std::endl;
    }else {
      std::cout << t[anst] << " " << h[ansh] << std::endl;
    }
  }
}