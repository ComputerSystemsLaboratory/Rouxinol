#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void answer()
{
	int i, x;
	i = 0;
	while (1) {
		i++;
		cin >> x;
		if (x == 0) break;
		printf("Case %d: %d\n", i, x);
	}
}

int main()
{
	answer();
	return 0;
}