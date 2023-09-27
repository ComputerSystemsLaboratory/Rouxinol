#include<bits/stdc++.h>

using namespace std;

#define int long long

map<char, int> num;
char mcxi[4] = { 'm', 'c', 'x', 'i' };

int ConvertMCXIToNum(string s)
{
	int n = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			int p = 1;
			if (i > 0 && isdigit(s[i - 1])) p = s[i - 1] - '0';
			n += p * num[s[i]];
		}
	}
	return n;
}

string ConvertNumToMCXI(int n)
{
	string s;
	for (int i = 0, w = 1000; w > 0; i++, w /= 10)
	{
		int latte = n / w;
		n %= w;
		if (latte > 1) s += '0' + latte;
		if (latte > 0) s += mcxi[i];
	}
	return s;
}

signed main()
{
	num['m'] = (num['c'] = (num['x'] = (num['i'] = 1) * 10) * 10) * 10;
	int N;
	cin >> N;
	for (int t = 0; t < N; t++)
	{
		string a, b;
		cin >> a >> b;
		cout << ConvertNumToMCXI(ConvertMCXIToNum(a) + ConvertMCXIToNum(b)) << endl;
	}
	return 0;
}