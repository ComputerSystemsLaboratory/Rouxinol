#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	stack<int> S1;
	stack<pair<int, int> > S2;
	vector<int> V1;
	char ch;
	int total = 0;
	for (int i = 0; cin >> ch; i++)
	{
		switch (ch)
		{
		case '\\':
			S1.push(i);
			break;
		case '/':
			if (!S1.empty())
			{
				int start = S1.top();
				S1.pop();
				total += i - start;
				int t_area = i - start;
				while (!S2.empty() && (S2.top().first > start))
				{
					t_area += S2.top().second;
					S2.pop();
				}
				S2.push(make_pair(start, t_area));
			}
			break;
		default:
			break;
		}
	}

	while (!S2.empty())
	{
		V1.push_back(S2.top().second);
		S2.pop();
	}
	reverse(V1.begin(), V1.end());
	cout << total << endl;
	cout << V1.size();
	for (int i = 0; i < V1.size(); i++)
	{
		cout << ' ' << V1[i];
	}
	cout << endl;
	return 0;
}
