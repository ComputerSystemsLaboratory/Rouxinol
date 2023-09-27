#include<iostream>
#include<stack>
using namespace std;
int main()
{
	while (true)
	{
		int n, r;
		cin >> n >> r;
		if (!n && !r)
			break;
		stack<int> S;
		stack<int> s1;
		stack<int> s2;
		for (int i = 1; i <= n; i++)
			S.push(i);
		for (int i = 1; i <= r; i++)
		{
			int p, c;
			cin >> p >> c;
			for (int i = 1; i <= p - 1; i++)
			{
				int t = S.top();
				S.pop();
				s1.push(t);
			}
			for (int i = 1; i <= c; i++)
			{
				int t = S.top();
				S.pop();
				s2.push(t);
			}
			for (int i = 1; i <= p - 1; i++)
			{
				int t = s1.top();
				s1.pop();
				S.push(t);
			}
			for (int i = 1; i <= c; i++)
			{
				int t = s2.top();
				s2.pop();
				S.push(t);
			}
		}
		cout << S.top() << endl;
	}
}
