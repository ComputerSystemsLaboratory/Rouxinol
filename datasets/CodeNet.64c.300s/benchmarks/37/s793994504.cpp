#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		int count = 0;
		for (int i = 1; i <= 1000; i++)
		{
			int sum = i;
			int j = i + 1;
			while (sum + j< n)
			{
				sum += j;
				j++;
			}
			if (sum + j == n)count++;
		}
		cout << count << endl;
	}
	return 0;
}