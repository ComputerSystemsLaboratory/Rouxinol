#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int a=0, b=0;
		int aa, bb;
		for (int i = 0; i < n; i++) {
			cin >> aa >> bb;
			if (aa > bb) a += aa+bb;
			else if (bb > aa) b += aa+bb;
			else a += aa, b += bb;
		}
		cout << a << " " << b << endl;
	}
	return 0;
}