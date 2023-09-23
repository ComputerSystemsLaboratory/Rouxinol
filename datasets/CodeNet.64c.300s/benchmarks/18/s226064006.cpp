#include<iostream>
using namespace std;
long long n[50], p;
int main() {
	n[0] = 1; n[1] = 1; n[2] = 2;
	for (int i = 3; i < 40; i++) {
		n[i] = n[i - 1] + n[i - 2] + n[i - 3];
	}
	while (true) {
		cin >> p;
		if (!p) { break; }
		cout << (n[p] + 3649) / 3650 << endl;
	}
}