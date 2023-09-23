#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	if (a < b && b < c)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}