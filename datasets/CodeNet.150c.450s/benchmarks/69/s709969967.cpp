#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int a[11];
	while (n--)
	{
		bool flag = true;
		int min_a = 0, min_b = 0;
		for (int i = 0; i < 10; i++)
			cin >> a[i];
		for (int j = 0; j < 10; j++)
		{
			if (a[j] > min_a)
			{
				if (min_a >= min_b)
				{
					min_a = a[j];
				}
				else
				{
					min_b = a[j];
				}
				continue;
			}
			else if (a[j] > min_b)
			{
				min_b = a[j];
			}
			else
			{
				flag = false;
				break;
			}
		}
		if (flag==true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}