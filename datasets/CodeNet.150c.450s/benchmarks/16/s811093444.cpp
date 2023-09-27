#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<vector>
	
using namespace std;

int main()
{
	stack<int> S1;
	stack<pair<int, int>> S2;
	vector<int> ans;
	string s;
	getline(cin, s);
	int A = 0, j, a;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '\\')
			S1.push(i);
		if (s[i] == '/' && !S1.empty())
		{
			j = S1.top();
			S1.pop();
			A += i - j;
			a = i - j;
			while (!S2.empty() && S2.top().first > j)
			{
				a += S2.top().second;
				S2.pop();
			}
			S2.push(make_pair(j, a));
		}
	}
	while (!S2.empty())
	{
		ans.push_back(S2.top().second);
		S2.pop();
	}
	reverse(ans.begin(), ans.end());
	cout << A << endl;
	cout << ans.size();
	for (int i = 0; i < ans.size(); i++)
		cout << " " << ans[i];
	cout << endl;
	return 0;
}

