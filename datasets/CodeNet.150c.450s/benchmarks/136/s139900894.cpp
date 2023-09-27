#include<iostream>
using namespace std;;

long long int gcd(long long int a,long long int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	 long long int a, b,g;
	while (cin >> a >> b) {
		if (a < b) {
			swap(a, b);
		}
		g = gcd(a, b);
		cout << g << " " << (a * b) / g << endl;
	}
	return 0;
}