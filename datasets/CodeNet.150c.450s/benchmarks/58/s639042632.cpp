#include "iostream"
#include "string"
#include <stack>
using namespace std;
/*vector<string> split(const string &s, char d)
{
	vector<string> v;
	string str;

	for (char ch : s)
	{
		if (ch == d)
		{
			if (!str.empty())
			{
				v.push_back(str);
			}
		}
		else
		{
			str += ch;
		}

		if (!str.empty())
		{
			v.push_back(str);
		}

		return v;
	}
}*/
void A()
{
	stack<int> stack;
	string str;
	while(cin >> str)
	{
		if (str == "+" || str== "-" || str == "*")
		{
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			int c;
			if (str == "+")
			{
				c = a + b;
			}
			else if (str == "-")
			{
				c = a - b;
			}
			else
			{
				c = a * b;
			}

			stack.push(c);
		}
		else
		{
			int num = stoi(str);
			stack.push(num);
		}
	}

	cout << stack.top() << endl;
}

void B()
{

}

void C()
{

}

void D()
{

}
int main()
{
	A();
	return 0;
}