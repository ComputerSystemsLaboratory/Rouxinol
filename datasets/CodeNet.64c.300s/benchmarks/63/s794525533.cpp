#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int a, b;
	while (cin >> a >> b){
		cout << gcd(a, b) << " " << a / gcd(a, b)*b << endl;
	}
	return 0;
}