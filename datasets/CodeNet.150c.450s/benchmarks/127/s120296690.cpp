#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void solve()
{
	int m;
	cin >> m;
	while(m--)
	{
		set<string> Set;
		string str;
		cin >> str;
		int n = str.size();
		for(int i = 1; i < n; ++i)
		{
			string str1;
			string str2;
			for(int j = 0; j < i; ++j)
			{
				str1.push_back(str[j]);
			}
			for(int j = i; j < n; ++j)
			{
				str2.push_back(str[j]);
			}
			Set.insert(str1 + str2);
			Set.insert(str2 + str1);
			string str2buf = str2;
			reverse(str2.begin(), str2.end());
			Set.insert(str1 + str2);
			Set.insert(str2 + str1);
			reverse(str1.begin(), str1.end());
			Set.insert(str1 + str2buf);
			Set.insert(str2buf + str1);
			Set.insert(str1 + str2);
			Set.insert(str2 + str1);
		}
		cout << Set.size() << endl;
	}
}

int main()
{
	solve();
	return(0);
}