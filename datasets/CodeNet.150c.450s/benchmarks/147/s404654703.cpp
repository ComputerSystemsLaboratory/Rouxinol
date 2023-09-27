#include<iostream>
#include<vector>
int num[10001];
using namespace std;
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			for (int k = 1; k <= 100; k++)
			{
				int x = i * i + k * k + j * j + i * j + i * k + j * k;
				if (x > n)
					break;
				num[x]++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << num[i] << endl;
	}

}