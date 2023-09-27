						/* In the name of Allah */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int>v(999999,0);
	cin >> n;
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			for (int k = 1; k <= 100; k++)
				v[(pow((i + j), 2) + pow((k + j), 2) + pow((i + k), 2)) / 2]++;
	for (int i = 1; i <= n; i++)
		cout << v[i] << endl;
	return 0;
}