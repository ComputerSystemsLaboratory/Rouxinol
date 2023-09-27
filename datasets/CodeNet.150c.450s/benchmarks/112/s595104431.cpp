#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main()
{
	while (1)
	{
		int b = 1;
		cin >> b;
		if (b == 0)
		{
			break;
		}
		vector<string> a;
		vector<string> d;
		for (int i = 0; i < b; i++)
		{
			string w;
			cin >> w;
			string ww;
			cin >> ww;
			a.push_back(w);
			d.push_back(ww);
		}
		int bb = 0;
		cin >> bb;
		vector<string> e;
		for (int i = 0; i < bb; i++)
		{
			string w;
			cin >> w;
			bool count = true;
			for (int i = 0; i < a.size(); i++)
			{
				if (count == false)
				{
					continue;
				}
				else if (w == a[i])
				{
					w = d[i];
					count = false;
				}
			}
			e.push_back(w);
		}
		for (int i = 0; i < e.size(); i++)
		{
			cout << e[i];
			if (i + 1 == e.size())
			{
				cout << endl;
			}
		}
	}

	return 0;
}