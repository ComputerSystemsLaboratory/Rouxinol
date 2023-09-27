#include <iostream>
using namespace std;

void test1();
int GCD(int a, int b);
int LCM(int a, int b, int gcd);

int main(void)
{
	test1();

	return 0;
}

void test1()
{
	int a, b;
	unsigned int iGcd, iLcm;

	while (cin >> a >> b)
	{
		iGcd = GCD(a, b);
		iLcm = LCM(a, b, iGcd);

		cout << iGcd << " " << iLcm << endl;
	}
}

int GCD(int a, int b)
{
	if (a%b == 0)
		return b;
	else
		return GCD(b, a%b);
}

int LCM(int a, int b, int gcd)
{
	return ((a / gcd) * (b / gcd))*gcd;
}