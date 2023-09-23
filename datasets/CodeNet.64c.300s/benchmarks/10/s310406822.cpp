#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int l = 1;
	while (true) {
		int x, y; cin >> x >> y;
		if (!x && !y)return 0;
		if (x > y) {
			cout << y << ' ' << x << endl;
		}
		else {
			cout << x << ' ' << y << endl;
		}
	}
}
