#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	int i = 1;

	while(true)
	{
		cin >> x;
		if (x == 0)
		{
			break;
		}
		printf("Case %d: %d\n", i, x);
		i++;
	}

	return 0;
}