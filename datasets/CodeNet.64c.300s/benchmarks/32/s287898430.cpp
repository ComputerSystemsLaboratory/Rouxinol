#include <iostream>
#include <cstdio>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int n, a, min=1000000, max=-1000000;
	long sum=0;
	
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> a;
		if (a < min) min = a;
		if (a > max) max = a;
		sum += a;
	}
	cout << min << " " << max << " " << sum << endl;
	
	return 0;
}