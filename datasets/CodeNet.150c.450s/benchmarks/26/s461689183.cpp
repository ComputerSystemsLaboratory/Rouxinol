#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	if (a == b)
	{
		printf("a == b\n");
		return 0;
	}
	if (a > b)
	{
		printf("a > b\n");
		return 0;
	}
	if (a < b)
	{
		printf("a < b\n");
		return 0;
	}
}