#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, x[3];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x[0] >> x[1] >> x[2];
		sort(x, x + 3);
		for(int j = 0; j < 3; j++) {
			x[j] *= x[j];
		}
		if(x[2] == x[0] + x[1]) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}