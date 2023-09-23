#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int x, y;
	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		if (x < y) printf("%d %d\n", x, y);
		else printf("%d %d\n", y, x);
	}
}

int main()
{
	answer();
	return 0;
}