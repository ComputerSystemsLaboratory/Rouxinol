#include<iostream>
#define m 1000000
using namespace std;

bool ba[m] = { true };
int cp(int x) {
	if (x < 2)return 0;
	if (x == 2)return 1;

	int co = 0;
	for (int i = 0; i < m; i++) {
		ba[i] = { true };
	}
	for (int i = 2; i*i <= x; i++) {
		if (ba[i]) {
			for (int j = i*i; j <= x; j += i) {
				ba[j] = { false };
			}
		}
	}
	for (int i = 2; i <= x; i++) {
		if (ba[i]) {
			++co;
		}
	}
	return co;
}

int main() {
	int x;
	while (cin >> x) {
		cout << cp(x) << endl;
	}
	return 0;
}