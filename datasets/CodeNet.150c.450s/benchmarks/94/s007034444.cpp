#define FOR(i, min, max) for(int (i) = (min); (i) < (max); (i)++)
#define MAX(a,b) ((a) > (b) ? (a) : (b)) 

#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int n, c = 0, a[100];
	cin >> n;
	FOR(i, 0, n)
		cin >> a[i];
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int j = n - 1; j > 0; j--)
		{
			if (a[j] < a[j - 1])
			{
				int rem = a[j];
				a[j] = a[j - 1];
				a[j - 1] = rem;
				c++;
				flag = true;
			}
		}
	}
	FOR(i, 0, n-1)
	{
		cout << a[i] << " ";
	}
	cout << a[n - 1] << endl;
	cout << c << endl;

	return 0;
}