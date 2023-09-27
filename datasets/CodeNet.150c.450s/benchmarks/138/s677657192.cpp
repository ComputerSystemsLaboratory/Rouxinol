#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int ggcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return ggcd(b, a%b);
}

int main()
{
	int x, y;
	cin >> x >> y;
	if (x < y)
	{
		swap(x, y);
	}

	int ans = ggcd(x, y);

	cout << ans << endl;


	return 0;
}