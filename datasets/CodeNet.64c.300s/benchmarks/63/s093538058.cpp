#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) { return a; }
	return gcd(b, a%b);
}
int main() {
	long long a, b, c,d,e,A,B,C;
	c = 9;
	d = 9;
	e = 9;
	C = 9;
	while (cin >> a >> b) {
		if (a < b) { swap(a, b); }
		A=gcd(a, b);
		C = a*b / A;
		cout << A << ' ' << C << endl;
	}
	return 0;
}