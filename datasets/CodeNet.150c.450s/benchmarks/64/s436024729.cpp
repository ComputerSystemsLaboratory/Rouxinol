#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string intToBinStr(int i, int digit)
{
	string str;
	while (i > 0)
	{
		str.push_back('0' + (i & 1));
		i >>= 1;
	}
	reverse(str.begin(), str.end());
	while (str.size() < digit)
	{
		str.insert(0, "0");
	}
	return str;
}

int ctoi(char ch)
{
	if ('0' <= ch && ch <= '9')
	{
		return (int)(ch - '0');
	}
	else
	{
		return 0;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int sum;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q;
	cin >> q;
	vector<int> m(q);
	vector<bool> can_make(q, false);
	for (int i = 0; i < q; i++)
	{
		cin >> m[i];
	}
	string mask;
	for (int i = 1; i < pow(2, n); i++)
	{
		sum = 0;
		mask = intToBinStr(i, n);
		for (int j = 0; j < n; j++)
		{
			sum += ctoi(mask[j]) * a[j];
		}
		for (int j = 0; j < q; j++)
		{
			can_make[j] = can_make[j] | (sum == m[j]);
		}
	}
	for (int i = 0; i < q; i++)
	{
		if (can_make[i] == true)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}
