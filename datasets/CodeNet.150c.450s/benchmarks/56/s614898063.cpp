#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long int amin = INT_MAX, amax = INT_MIN, sum = 0;
	for (int i = 0;i < n; i++)
	{
		long long int a;
		cin >> a;
		amin = min(amin, a);
		amax = max(amax, a);
		sum += a;
	}
	cout << amin << " " << amax << " " << sum << endl;
}
