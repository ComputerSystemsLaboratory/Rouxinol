#include <iostream>
#include <cstdio>
using namespace std;

int euclidean(int, int);

int main(int argc, char const *argv[])
{
	int a, b;
	cin >> a >> b;

	printf("%d\n", euclidean(a, b));

	return 0;
}


int euclidean(int a, int b)
{
	int r = 0, q = 0;

	if (a == 0) return b;
	if (b == 0) return a;

	if (a >= b)
	{
		do
		{
			q = a / b;
			r = a % b;
			if (r == 0) break;
			a = b;
			b = r;
		} while(r != 0);
		return b;
	}
	else
	{
		do
		{
			q = a / b;
			r = b % a;
			if (r == 0) break;
			b = a;
			a = r;
		} while(r != 0);
		return a;

	}
}