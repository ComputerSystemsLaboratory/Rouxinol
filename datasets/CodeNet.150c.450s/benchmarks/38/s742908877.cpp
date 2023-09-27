#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N,n[3];
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int m = 0; m < 3; m++) {
			cin >> n[m];
		}
		sort(n, n + 3);
		if (n[2] * n[2] == n[1] * n[1] + n[0] * n[0]) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}