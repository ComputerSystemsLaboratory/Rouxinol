#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, r;
	while (cin >> n >> r, n)
	{
		int a[51];
		for (int i = 1;i <= n;i++)a[i] = n - i + 1;
		for (int i = 0;i < r;i++)
		{
			int p, c;cin >> p >> c;
			int b[51];
			for (int j = 1;j < p;j++)b[j] = a[j];
			for (int j = p;j < p + c;j++)a[j - p + 1] = a[j];
			for (int j = 1;j < p;j++)a[c + j] = b[j];
		}
		cout << a[1] << endl;
	}
}