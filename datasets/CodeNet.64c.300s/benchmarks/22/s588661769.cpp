#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;
		a = a * a;
		b = b * b;
		c = c * c;
		cout << ((a == b + c || b == a + c || c == a + b) ? "YES" : "NO") << endl;
	}
}