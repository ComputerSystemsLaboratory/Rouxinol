#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
	int n;

	cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++ )
	{
		cin >> a[i];
	}

	int min = a[0];
	int max = a[0];
	long sum = a[0];

	for(int i = 1; i < n; i++)
	{
		if( min > a[i] )
		{
			min = a[i];
		}
		if( max < a[i] )
		{	
			max = a[i];
		}
		sum += a[i];
	}

	cout << min << " " << max << " " << sum << endl;
	return 0;
}