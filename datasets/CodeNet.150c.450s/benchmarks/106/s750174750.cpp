#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b, c;
	int i;
	int count = 0;

	scanf("%d%d%d", &a, &b, &c);

	for (i = a; i <= b; i++) {
		if (c % i == 0) count++;
	}

	printf("%d\n", count);
	
	return (0);
}