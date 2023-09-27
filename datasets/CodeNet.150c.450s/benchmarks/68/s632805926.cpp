#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
  
    sort(a.begin(), a.end());

    int mind = 1000001;
    for (int i = 1; i < n; i++) {
      int d = a[i] - a[i - 1];
      if (d < mind) {
	mind = d;
      }
    }

    cout << mind << endl;
  }
}