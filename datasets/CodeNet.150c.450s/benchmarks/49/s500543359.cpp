#include <iostream>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		int a = 1001;
		int b = -1;
		int sum = 0;
		for(int i = 0; i < n; ++i) {
			int t;
			cin >> t;
			sum += t;
			a = min(a, t);
			b = max(b, t);
		}
		
		sum -= a + b;
		
		cout << sum / (n - 2) << endl;
	}
	return 0;
}