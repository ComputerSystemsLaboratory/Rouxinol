#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace  std;

int main()
{
	string s;
	string maxLenS = "";
	map<string, int> m;
	vector<string> v;
	while (cin >> s)
	{
		if (maxLenS.size() < s.size())
		{
			maxLenS = s;
		}
		if (m.find(s) == m.end())
		{
			m[s] = 0;
			v.push_back(s);
		}
		else
		{
			m[s]++;
		}
	}
	int maxIndex = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (m[v[i]] > m[v[maxIndex]])
		{
			maxIndex = i;
		}
	}
	cout << v[maxIndex] << " " << maxLenS << endl;
	return 0;
}