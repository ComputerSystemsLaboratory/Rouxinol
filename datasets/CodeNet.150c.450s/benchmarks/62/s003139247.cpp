#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int numbers[3];

	for (int i = 0; i < 3; ++i)
	{
		cin >> numbers[i];
	}

	sort(numbers, numbers + 3);

	printf("%d %d %d\n", numbers[0], numbers[1], numbers[2]);

	return 0;
}