#include<iostream>
using namespace std;
int main() {
	int n, d;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)
			cout << ' ' << i;
		else {
			d = i;
			while(d) {
				if (d % 10 == 3) {
					cout << ' ' << i;
					break;
				}
				else d /= 10;
			}
		}
	}
	cout << endl;
	return 0;
}