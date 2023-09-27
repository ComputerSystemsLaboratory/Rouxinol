#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
#include <stack>
#include <vector>
using namespace std;


int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	char ch;
	stack<int> s1;	//?????????'\'????¨???????
	stack< pair<int, int> > s2;//first??¨????°´??¢?????????'\'????¨???????,second??¨?????\?§??°´?????¢?§?
	int sum = 0;
	for (int i = 0; cin >> ch; ++i)
	{
		if (ch == '\\')
			s1.push(i);
		else if (ch == '/' && !s1.empty())
		{
			int l = s1.top();
			s1.pop();
			int r = i;
			sum += r - l;
			int a = r - l;
			while (!s2.empty() && s2.top().first > l)
			{
				a += s2.top().second;
				s2.pop();
			}
			s2.push(make_pair(l, a));
		}
	}
	vector<int> ans;
	while (!s2.empty())
	{
		ans.push_back(s2.top().second);
		s2.pop();
	}
	reverse(ans.begin(), ans.end());
	cout << sum << endl << ans.size();
	for (int i = 0; i != ans.size(); ++i)
	{
		cout << ' ' << ans[i];
	}
	cout << endl;
	return 0;
}