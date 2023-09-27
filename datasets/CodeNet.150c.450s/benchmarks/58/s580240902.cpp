#include <iostream>
#include <stack>
#include <string>

using namespace std;

void solve()
{
	stack<int> numStack;
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '+')
		{
			int a = numStack.top();
			numStack.pop();
			int b = numStack.top();
			numStack.pop();
			numStack.push(b + a);
		}
		else if (str[i] == '-')
		{
			int a = numStack.top();
			numStack.pop();
			int b = numStack.top();
			numStack.pop();
			numStack.push(b - a);
		}
		else if (str[i] == '*')
		{
			int a = numStack.top();
			numStack.pop();
			int b = numStack.top();
			numStack.pop();
			numStack.push(b * a);
		}
		else if (str[i] != ' ')
		{
			int temp = str[i] - '0';
			while (str[++i] != ' ')
			{
				temp = temp * 10 + str[i] - '0';
			}
			numStack.push(temp);
		}
	}
	cout << numStack.top() << endl;
}

int main()
{
	solve();
	return(0);
}