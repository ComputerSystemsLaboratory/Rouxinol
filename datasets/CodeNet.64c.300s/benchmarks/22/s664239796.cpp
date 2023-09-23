#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, i;
	float a, b, c;
	cin >> n;
	for (i = 0; i<n; i++){
		cin >> a >> b >> c;
		if (hypot(a, b) == c || hypot(b, c) == a || hypot(a, c) == b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}