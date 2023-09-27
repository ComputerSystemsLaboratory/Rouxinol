#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 100;
int pts[MAX_N];
int n;

int main() {
	while (true) {
		cin >> n; if (n <= 0) break;
		for (int i = 0; i < n; ++i) 
			cin >> pts[i];
		sort(pts, pts + n);

		long pt = 0;
		for (int i = 1; i < n-1; ++i)
			pt += pts[i];

		cout << pt / (n-2) << endl;
	}

	return 0;
}