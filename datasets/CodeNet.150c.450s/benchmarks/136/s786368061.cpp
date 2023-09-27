#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	if(a % b == 0) { return b; }

	if(b % a == 0) { return a; }

	if(a > b) { return GCD(a % b, b); }

	if(a < b) { return GCD(a, b % a); }
}

int LCM(int a, int b)
{
	return a / GCD(a, b) * b;
}

int main()
{
	int a, b;

	while(cin >> a >> b)
	{
		cout << GCD(a, b) << ' ' << LCM(a, b) << endl;
	}

	return 0;
}