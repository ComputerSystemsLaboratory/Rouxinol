#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	stack<int> stk;
	string line;
	getline(cin, line);
	stringstream s;

	s << line;
	string str;

	while (!s.eof())
	{
		s >> str;
		if (str == "+")
		{
			int a = stk.top();
			stk.pop();
			int b = stk.top();
			stk.pop();
			stk.push(a+b);
		}
		else if (str == "-")
		{
			int a = stk.top();
			stk.pop();
			int b = stk.top();
			stk.pop();
			stk.push(b-a);
		}
		else if (str == "*")
		{
			int a = stk.top();
			stk.pop();
			int b = stk.top();
			stk.pop();
			stk.push(a * b);
		}
		else
		{
			stk.push(stoi(str));
		}

	}
	std::cout << stk.top() << endl;

	return 0;
}