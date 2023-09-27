#include<iostream>
using namespace std;
int main()
{
	int n, m, p;
	int x[101];
	while (cin >> n >> m >> p && n != 0 && m != 0)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> x[i];
			sum += x[i]*100;
		}
		if (x[m] == 0)
		{
			cout << 0 << endl;
			continue;
		}
		double ans  =sum - ((double)p /100.0) * sum;
		cout << (int)(ans / x[m]) << endl;

	}
	return 0;
}