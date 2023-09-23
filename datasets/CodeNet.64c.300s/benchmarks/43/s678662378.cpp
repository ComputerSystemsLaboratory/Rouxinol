#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[2],b;
	for (int i = 0; i < 2; ++i) {
		a[i] = 0;
		for (int j = 0; j < 4; ++j) {
			cin >> b;
			a[i] += b;
		}
	}
	cout << max(a[0], a[1]) << endl;
	return 0;
}