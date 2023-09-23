#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	while (a && b && a != b)
		if (a > b)
			a = a % b;
		else if (b > a)
			b = b % a;
	cout << max(a, b) << endl;
}