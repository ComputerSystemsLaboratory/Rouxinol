#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isprime(int);

int main(int argc, char const *argv[])
{
	int size, count = 0, num;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		cin >> num;
		if (isprime(num)) count++;
	}
	printf("%d\n", count);
	return 0;
}


bool isprime(int x)
{
	for (int i = 2; i <= (int)sqrt(x); ++i)
	{
		if (x % i == 0) return false;
	}
	return true;
}