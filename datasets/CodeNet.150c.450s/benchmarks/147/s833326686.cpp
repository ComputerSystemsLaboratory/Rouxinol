#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long int li;
typedef long long ll;
typedef long double ld;

int main()
{
	int n;
	cin >> n;
	vector<int> v (n + 1, 0);
	int l = ceil(sqrt(n));
	for (int i = 1; i <= l; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			for (int k = 1; k <= l; k++)
			{
				int t = i * i + j * j + k * k + i * j + i * k + j * k;
				if (t <= n)
				{
					v[t]++;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
    {
		cout << v[i] << "\n";
    }
}
