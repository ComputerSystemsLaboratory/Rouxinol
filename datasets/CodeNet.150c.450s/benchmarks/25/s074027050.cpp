#include <bits/stdc++.h>
using namespace std;

int main()
{
	string scin;
	string s;
	while (cin >> scin)
	{
		s += scin;
	}
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	map<char, int> m;
	for (char i = 'a'; i < 'z' + 1; i++)
	{
		m[i] = 0;
	}

	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}
	for (auto i : m)
	{
		if (i.first < 'a')
		{
			continue;
		}
		cout << i.first  << " : " << i.second << endl;
	}
	return 0;
}