#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	long int num;
	long int sum = 0;
	long int max = -1000000;
	long int min = 1000000;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		if (min > num) min = num;
		if (max < num) max = num;
		sum += num;
	}

	printf("%ld %ld %ld\n", min, max, sum);

	return 0;
}