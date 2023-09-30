#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	stack<int> GradS;
	stack<pair<int, int>> PartSum;

	int sum = 0;
	char ch;

	for (int i = 0;cin >> ch;i++)
	{
		if (ch == '\\')
			GradS.push(i);
		else if (ch == '/' && GradS.size() > 0)
		{
			// ????????????????????¢?????´????????????
			int j = GradS.top();
			GradS.pop();

			// ?????¨???/??????\??????????????¨??§??¢????????????
			int p = i - j;

			// ?????¢????????????
			sum += p;

			// ????????´???????????????????????????
			while (PartSum.size() > 0 && PartSum.top().first > j)
			{
				p += PartSum.top().second;
				PartSum.pop();
			}

			// ?????¨??????????????¢??§?????¨?????¢???
			PartSum.push(make_pair(j, p));
		}
	}

	vector<int> ans;

	// ???????????????????????????vector?????????
	while (PartSum.size() > 0)
	{
		ans.push_back(PartSum.top().second);
		PartSum.pop();
	}

	// ??????
	cout << sum << endl;
	cout << ans.size();
	for (int i = ans.size() - 1;i >= 0;i--)
	{
		cout << " ";
		cout << ans[i];
	}
	cout << endl;

	return 0;
}