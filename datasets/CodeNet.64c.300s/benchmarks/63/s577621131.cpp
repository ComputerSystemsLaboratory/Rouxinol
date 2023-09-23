#include<iostream>
using namespace std;

long long gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main()
{
	long long a, b, m;
	while (cin >> a >> b) {
		long long c = gcd(a, b);
		m = a*b/c;
		cout << c << " " << m << endl;
	}
	return 0;
}