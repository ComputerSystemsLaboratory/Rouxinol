#include <bits/stdc++.h>
using namespace std;
long long d[366][27];
long long c[27];
long long last[27] = {0};
vector <int> v;
void calc(vector <int> vec)
{
	long long re = 0;
	int cur;
	int j = 1;
	for (vector <int> ::iterator it = vec.begin(); it != vec.end(); it++, j++)
	{
		cur = *it;
		last[cur] = j;
		re += d[j][cur];
		for (int k = 1; k <= 26; k++)
		{
			re -= c[k] * (j - last[k]);
		}
		cout << re << endl;
	}
}
int main()
{
	int f, n;//f--days,n--temp_input
	cin >> f;
	for (int i = 1; i <= 26; i++)
	{
		cin >> c[i];
	}
	for (int i = 1; i <= f; i++)
	{
		for (int j = 1; j <= 26; j++)
		{
			cin >> d[i][j];
		}
	}
	for (int i = 1; i <= f; i++)
	{
		cin >> n;
		v.push_back(n);
	}
	calc(v);
	return 0;
}