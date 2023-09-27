#include<iostream>
using namespace  std;
int f(int x)
{
	return x * x;
}
int main()
{
	int d;
	while (cin >> d)
	{
		int sum = 0;
		for (int i = d; i <= 600 - d; i += d)
		{
			sum += (f(i) * d);
		}
		cout << sum << endl;
	}
	return 0;
}