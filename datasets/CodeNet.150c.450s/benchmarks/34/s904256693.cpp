#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	while(cin >> n && n != 0)
	{
		vector<int> a(n+1);
		a[0] = 1;a[1] = 1;a[2] = 2;

		for (int i = 3; i <= n; i++)
			a[i] = a[i-1] + a[i-2] + a[i-3];

		double year;
		year = ceil((double)a[n] / 3650);
		cout << year << endl;
	}

	return 0;
}
