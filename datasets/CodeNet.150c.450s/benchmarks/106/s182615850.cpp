#include<iostream>
using namespace std;
int main() {
	int a, b, c, d = 0; cin >> a >> b >> c;
	for (int h = a; h <= b; h++) {
		if (c%h == 0) {
			d++;
		}
	}
	cout << d << endl;
}
