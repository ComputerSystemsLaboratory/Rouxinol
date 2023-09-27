#include<iostream>
#include<cstring>
using namespace std;

#define INF -2000000000

int main() {
	int n, b[1000],c[1000][4];
	memset(b, -128, sizeof(b));
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << b[i] << ", ";
		if (b[i / 2] >= INF) {
			cout << "parent key = " << b[i / 2] << ", ";
		}
		if (b[i * 2] >= INF) {
			cout << "left key = " << b[i * 2] << ", ";
		}
		if (b[i * 2 + 1] >= INF) {
			cout << "right key = " << b[i * 2 + 1] << ", ";
		}
		cout << endl;
	}
	return 0;
}