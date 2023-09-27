#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string a;
	int n, m;
	stack<int> s;
	while (cin>>a)
	{
		if (a == "+")
		{
			m = s.top(); s.pop();
			n = s.top(); s.pop();
			s.push(n + m);
		}
		else if (a == "-")
		{
			m = s.top(); s.pop();
			n = s.top(); s.pop();
			s.push(n - m);
		}
		else if (a == "*")
		{
			m = s.top(); s.pop();
			n = s.top(); s.pop();
			s.push(n*m);
		}
		else
		{
			s.push(stoi(a));
		}
	}
	cout << s.top() << endl;
    return 0;
}