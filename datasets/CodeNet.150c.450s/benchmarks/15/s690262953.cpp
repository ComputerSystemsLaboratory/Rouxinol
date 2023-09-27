#include <iostream>
#include <vector>

using namespace std;

int linearSearch(int x, vector<int> &s)
{
	vector<int> u = s;
	u.push_back(x);
	int i = 0;
	while (x != u[i])
	{
		i++;
	}
	if (i == s.size())
	{
		return 0;
	}
	else return 1;
}

int main()
{
	int n;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int q;
	cin >> q;
	vector<int> t(n);
	for (int i = 0; i < q; i++)
	{
		cin >> t[i];
	}
	int count = 0;
	for (int i = 0; i < q; i++)
	{
		count += linearSearch(t[i], s);
	}
	cout << count << endl;
}
