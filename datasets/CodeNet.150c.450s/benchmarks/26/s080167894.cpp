#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	if (a < b) printf("a < b\n");
	if (a > b) printf("a > b\n");
	if (a == b) printf("a == b\n");
	return (0);
}