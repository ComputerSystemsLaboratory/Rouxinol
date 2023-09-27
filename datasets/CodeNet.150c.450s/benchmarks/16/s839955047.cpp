#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;

char section[20000];
int tot_area = 0;

int main()
{
	cin >> section;
	stack<int> S;
	stack<pair<int, int> > S2;

	for (int i = 0; i < strlen(section); i++)
	{
		if (section[i] == '\\')
		{
			S.push(i);
		}
		if (section[i] == '/' && !S.empty())
		{
			int left = S.top(); S.pop();
			tot_area += i - left;
			
			int area = i - left;
			while (!S2.empty() && S2.top().first > left)
			{
				area += S2.top().second;
				S2.pop();
			}
			S2.push(make_pair(left, area));
			
		}
		
	}

	vector<int> ans;
	int length = S2.size();
	if (length)
	{
		for (int i = 0; i < length; i++)
		{
			ans.push_back(S2.top().second);
			S2.pop();
		}

		cout << tot_area << endl << length << ' ';
		for (int i = length - 1; i > 0; i--)
			cout << ans[i] << ' ';

		cout << ans[0] << endl;
	}
	else
		cout << 0 << endl << 0 << endl;

//	cin.get();
//	cin.get();
	return 0;
}