#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{	
	int n, m = 0;
	int a[101];

	memset(a, 0, sizeof(a));

	while (cin >> n)
		a[n]++;			

	for (int i = 1; i <= 100; i++)
		m = max(m, a[i]);

	for (int i = 1; i <= 100; i++)
		if (a[i] == m)
			cout << i << endl;

	return 0;
}

