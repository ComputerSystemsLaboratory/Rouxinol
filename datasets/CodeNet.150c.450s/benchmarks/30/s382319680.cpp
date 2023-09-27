#define FOR(i, min, max) for(int (i) = (min); (i) < (max); (i)++)
#define MAX(a,b) ((a) > (b) ? (a) : (b)) 
#define SWAP(a,b) { int r = a; a = b; b = r; }

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
	FOR(i, 0, n)
	{
		int minj = i;
		FOR(j, i, n)
		{
			if (a[j] < a[minj])
				minj = j;
		}
		if (a[i] != a[minj])
		{
			SWAP(a[i], a[minj]);
			c++;
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