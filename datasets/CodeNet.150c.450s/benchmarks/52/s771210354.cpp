#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	deque<int> ans;
	int n;

	while (cin >> n)
	{
		if (cin.eof()) return 0;
		if (n == 0)
		{
			ans.push_front(s.top());
			s.pop();
			//if (s.empty()) break;
		}
		else
		{
			s.push(n);
		}
	}

	while (1)
	{
		if (!ans.empty())
		{
			cout << ans.back() << endl;
			ans.pop_back();
		}
		else break;
	}
	return 0;
}