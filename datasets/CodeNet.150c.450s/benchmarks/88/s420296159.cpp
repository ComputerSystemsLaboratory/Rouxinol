#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int h, w, f, d;
  while (cin >> h >> w, h) {
    d = h*h + w*w;
    f = 1;
    ++h;
    while (f) {
      for (int i = h; i*i < d; ++i) {
	w = sqrt(d-i*i);
	if (w <= i) break;
	else if (w*w + i*i == d) {
	  cout << i << " " << w << endl;
	  f = 0;
	  break;
	}
      }
      h = 1;
      ++d;
    }
  }
}