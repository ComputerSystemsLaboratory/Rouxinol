#include<iostream>
#include<vector>
using namespace std;

int digit(int x)
{
	int digit = 1;
	while (x /= 10)
	{
		digit++;
	}
	return digit;
}

int main()
{
	vector<int> a(201, -1);
	vector<int> b(201, -1);
	int i = 0;
	while (1)
	{
		cin >> a[i] >> b[i];
		if (cin.eof())
		{
			break;
		}
		i++;
	}
	i = 0;
	while (a[i] >= 0)
	{
		cout << digit(a[i] + b[i]) << endl;
		i++;
	}
	return 0;
}
