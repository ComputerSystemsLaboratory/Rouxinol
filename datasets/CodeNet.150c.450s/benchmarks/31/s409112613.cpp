#include<iostream>
using namespace std;

int main()
{
	int n, r;
	long long max = -2000000000, min = 2000000000;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> r;
		if (r - min > max)
			max = r - min;
		if (r < min)
			min = r;
	}
	cout << max << endl;

	return 0;
}
