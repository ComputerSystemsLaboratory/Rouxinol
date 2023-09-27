#include <iostream>
using namespace std;
void call(int n) {
	for (int i = 1; i <= n;i++) {
		if (i % 3 == 0) { cout << " " << i; continue; }
		int temp = i;
		while (temp) {
			if (temp % 10 == 3) { cout << " " << i; break; }
			temp /= 10;
		}
	}
	cout << endl;
}
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	call(n);
}