#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string,bool> S;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "insert")
		{
			string t;
			cin >> t;
			S[t] = true;
			continue;
		}
		if (s == "find")
		{
			string t;
			cin >> t;
			//auto result = find(S.begin(), S.end(), t);
			
			//if (result != S.end())
			if (S[t] == true)
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}