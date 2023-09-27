#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, p;
	while (cin >> n >> p, n)
	{
		int w = p;
		int a[50] = {};
		int cnt = 0, pos = 0;
		while (w || cnt!=1)
		{
			if (w)
			{
				cnt += !a[pos%n];
				a[pos%n]++;
				w--;
			}
			else
			{
				if (a[pos%n])w += a[pos%n], a[pos%n] = 0, cnt--;
			}
			pos++;
		}
		for (int i = 0;i < n;i++)if (a[i])cout << i << endl;
	}
}