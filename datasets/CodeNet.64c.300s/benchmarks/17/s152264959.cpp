#include <iostream>
using namespace std;

int main() {
  int x, y, s;
  while (true) {
    cin >> x >> y >> s;
    if (x == 0) return 0;
    
    int max = 0;
    for (int i = 1; i <= s / 2; i++) {
      int t1 = i * (100 + x) / 100;
      for (int j = 1; j < s; j++) {
	int t2 = j * (100 + x) / 100;
	if (t1 + t2 != s) continue;
	int s1 = i * (100 + y) / 100;
	int s2 = j * (100 + y) / 100;
	if (s1 + s2 > max) max = s1 + s2;
      }
    }
    cout << max << endl;
  }
}