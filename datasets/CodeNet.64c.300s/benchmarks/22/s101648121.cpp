#include<iostream>
#include<utility>
#include<climits>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;

		if (pow(a, 2)  == pow(b, 2) + pow(c, 2)
			||pow(b, 2)  == pow(c, 2) + pow(a, 2)
			||pow(c, 2)  == pow(a, 2) + pow(b, 2))
		{cout << "YES" << endl;}
		else {cout << "NO" << endl;}
	}

	return 0;
}