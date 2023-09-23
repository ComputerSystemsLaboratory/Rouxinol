#include <iostream>
using namespace std;

int main() {
	int a, b, c, n;
	cin >> n;
	for (int i=0;i<n;i++) {
    bool ok = false;
		cin >> a >> b >> c;
    if (a < c && b < c) {
      ok = (a*a+b*b == c*c);
    } else if (a < b && c < b) {
      ok = (a*a+c*c == b*b);
    } else {
      ok = (b*b+c*c == a*a);
    }
    cout << (ok?"YES":"NO") << endl;
	}

  return 0;
}