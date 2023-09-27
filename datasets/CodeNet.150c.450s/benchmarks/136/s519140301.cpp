#include <iostream>
#include <algorithm>
using namespace std;

int Gcd(int a, int b)
{
	//??????????????????????????????
	if (a < b) swap(a, b);
	if (b == 0) return a;
	return Gcd(a % b, b);
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int gcd = Gcd(a, b);
		int lcm = a / gcd * b;
		cout << gcd << " " << lcm << endl;
	}

	return 0;
}