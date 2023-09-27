#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string op;
		cin >> op;
		if (op == "print")
		{
			int start, e;
			cin >> start >> e;
			for (int j = start; j <= e; j++)
			{
				cout << s[j];
			}
			cout << endl;
		}
		if (op == "replace")
		{
			int start, end;
			cin >> start >> end;
			string rep;
			cin >> rep;
			for (int i = start,j = 0; i <=end; i++)
			{
				s[i] = rep[j++];
			}
		}
		if (op == "reverse")
		{
			int start, end;
			cin >> start >> end;

			string subs = s.substr(start, end + 1 - start);
			
			for (int i = start,j = subs.size() - 1; j != -1; i++,j--)
			{
				s[i] = subs[j];
			}

		}
	}
	return 0;
}