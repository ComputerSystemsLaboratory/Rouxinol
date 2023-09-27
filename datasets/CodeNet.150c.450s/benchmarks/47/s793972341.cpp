#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (c + e <= a && c - e >= 0 && d + e <= b && d - e >= 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
