#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main(void)
{
	int n, a[5001];
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		int goukei = 0, ryuta = -10000000;
		for (int i = 1; i <= n; i++)
		{
			goukei = 0;
			for (int j = i; j <= n; j++)
			{
				goukei = goukei + a[j];
				ryuta = max(goukei, ryuta);
			}
		}
		cout << ryuta << endl;
	}
	return 0;
}