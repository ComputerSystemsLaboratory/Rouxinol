#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> S1;
	stack<pair<int, int> > S2;
	stack<int> res;
	char c;
	int i = 0;
	int j = 0;
	int v, all = 0;
	while(cin >> c)
	{
		i++;
		switch(c)
		{
			case '\\':
				S1.push(i);
				break;
			case '/':
				if (S1.size() == 0) break;
				j = S1.top();
				S1.pop();
				v = i - j;
				all += v;
				while (S2.size() > 0 && S2.top().first > j)
				{
					v += S2.top().second;
					S2.pop();
				}
				S2.push(make_pair(j, v));
				break;
			default:
				break;
		}
	}
	cout << all << endl;
	cout << S2.size();
	while(S2.size() > 0) 
	{
		res.push(S2.top().second);
		S2.pop();
	}
	while(res.size() > 0)
	{
		cout << " " << res.top();
		res.pop();
	}
	cout << endl;
}