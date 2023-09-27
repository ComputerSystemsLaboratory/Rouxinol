#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Stack
{
private:
	vector<int> s;
	int pos;
public:
	Stack(int n)
	{
		s.resize(n);
		pos = 0;
	}
	void push(int a)
	{
		s[pos++] = a;
	}
	int pop()
	{
		return s[--pos];
	}
};

int main()
{
	string symbol;
	Stack s(200);
	int op1, op2;
	while (cin >> symbol, !cin.eof())
	{
		if (symbol == "+")
		{
			op2 = s.pop();
			op1 = s.pop();
			s.push(op1 + op2);
		}
		else if (symbol == "-")
		{
			op2 = s.pop();
			op1 = s.pop();
			s.push(op1 - op2);
		}
		else if (symbol == "*")
		{
			op2 = s.pop();
			op1 = s.pop();
			s.push(op1 * op2);
		}
		else
		{
			s.push(atoi(symbol.c_str()));
		}
	}
	cout << s.pop() << endl;
    return 0;
}
