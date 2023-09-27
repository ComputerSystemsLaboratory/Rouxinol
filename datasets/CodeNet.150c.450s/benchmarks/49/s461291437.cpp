#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int n;
	while (cin >> n && n) {
		int sum = 0;
		int ln = 100000;
		int hn = 0;
		for (int i = 0; i < n; ++i) {
			int d;
			cin >> d;
			ln = min(d, ln);
			hn = max(hn, d);
			sum += d;
		}
		cout << (sum - hn - ln) / (n - 2) << endl;
	}
	return 0;
}
