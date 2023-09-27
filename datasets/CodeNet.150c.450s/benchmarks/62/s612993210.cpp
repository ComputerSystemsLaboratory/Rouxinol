#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long int lint;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void answer()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
	printf("%d %d %d\n", a, b, c);
}

int main()
{
	answer();
	return 0;
}