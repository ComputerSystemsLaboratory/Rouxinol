#include <cstdio>
#include <cmath>
#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int a, b, x;
	string str;
	stack<int> s;
	while (cin >> str)
	{
		char ch = str[0];
		if (ch == '+')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a + b);
		}
		else if (ch == '-')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(b - a);
		}
		else if (ch == '*')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a * b);
		}
		else if (ch == '/')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a / b);
		}
		else
		{
			s.push(atoi(str.c_str()));
		}
	}
	cout << s.top() << endl;
	//system("pause");
	return 0;
}