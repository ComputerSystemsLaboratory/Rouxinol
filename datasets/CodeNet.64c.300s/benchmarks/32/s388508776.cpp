#include<iostream>
using namespace std;
int main()
{
	int  i, n, a[10009],max ,min;
	long long int sum = 0;
	cin >> n;
	max = -1000001;
	min = -max;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{ sum += a[i];
	if (a[i] > max)max = a[i];
	if (a[i] < min)min = a[i];	
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}
