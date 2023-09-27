#include <bits/stdc++.h>
using namespace std;

int H;
int T[251];

int getparent(int u) {
	return u / 2;
}

int getleft(int u) {
	return (2 * u <= H ? 2 * u : 0);
}

int getright(int u) {
	return (2 * u + 1 <= H ? 2 * u + 1 : 0);
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; i++)
		cin >> T[i];
	for (int i = 1; i <= H; i++) {
		cout << "node " << i << ": key = " << T[i] << ", ";
		if (getparent(i))
			cout << "parent key = " << T[getparent(i)] << ", ";
		if (getleft(i))
			cout << "left key = " << T[getleft(i)] << ", ";
		if (getright(i))
			cout << "right key = " << T[getright(i)] << ", ";
		cout << endl;
	}
	return 0;
}

