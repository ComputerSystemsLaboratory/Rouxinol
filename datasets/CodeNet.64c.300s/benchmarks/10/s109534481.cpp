#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x, y;

	while (1) {
		scanf("%d%d", &x, &y);
		if (x == 0 && y == 0) break;
		if (x > y) swap(x, y);
			printf("%d %d\n", x, y);
	}

	return (0);
}