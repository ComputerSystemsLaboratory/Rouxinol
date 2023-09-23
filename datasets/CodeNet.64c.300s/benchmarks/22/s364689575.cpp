#include<iostream>
using namespace std;

void rate() {
int x, y, z;
	cin >> x >> y >> z;
	if (x*x + y*y == z*z || y*y + z*z == x*x || z*z + x*x == y*y) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

}

int main() {
	int i, k;
		cin >> k;
		for (i = 1; i <= k; i = i + 1) {
			rate();
		}
	
	return 0;
}