#include<iostream>
using namespace std;

int gcd(int a,int b) {
	int r;
	while (1) {
	
			r = a%b;
			if (r == 0) {
				break;
			}
			a = b;
			b = r;	
	}
	return b;
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		int c;
		c = gcd(a, b);
		int d, e;
		d = a / c;
		e = b / c;
		int lcm = d*e*c;
		cout << c << " " << lcm << endl;
	}
	return 0;
}