#include <iostream>

using namespace std;
int gcd(int a, int b)
{
//	cout << a << " " << b << endl;
	if (!a) return b;
	if (!b) return a;
	if (a < b) return gcd(a, b % a);
	return gcd(a % b, b);
}

int main()
{
	int a, b;
	cin >> a >>b;
	cout << gcd(a, b) << endl;
	return 0;
}