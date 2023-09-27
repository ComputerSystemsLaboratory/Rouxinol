#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int p[1000];
		for (int i = 0;i < n;i++) {
			cin >> p[i];
		}
		sort(p, p + n);
		int s = 0;
		for (int i = 1;i < n - 1;i++) {
			s += p[i];
		}
		cout << s / (n - 2) << endl;
	}
	return 0;
}