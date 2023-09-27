#include<iostream>
using namespace std;
int main() {
	int n,j;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			cout << ' ' << i;
		}
		else if (i % 10 == 3) {
			cout << ' ' << i;
		}
		else {
			for (j = i / 10; j > 0; j = j / 10) {
				if (j % 10 == 3) {
					cout << ' ' << i;
					break;
				}
			}
		}
	}
	cout << endl;
	return 0;
}