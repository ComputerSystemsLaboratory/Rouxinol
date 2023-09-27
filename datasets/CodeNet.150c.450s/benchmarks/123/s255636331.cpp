#include<iostream>
using namespace std;

int main()
{
	int count = 0, flag, n, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		flag = 1;
		for (int j = 2; j * j <= a; j++)
			if (!(a % j))
			{
				flag = 0;
				break;
			}
		if (flag)
			count++;
	}
	cout << count << endl;

	return 0;
}
