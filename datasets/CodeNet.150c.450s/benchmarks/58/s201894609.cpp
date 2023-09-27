#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

class cPol
{
	vector<string> v;
	stack<int> ss;
	int ans;

	void calc();
	char opStrToChar(const string &);

public:
	cPol(string o)
	{
		istringstream iss(o);
		while (!iss.eof())
		{
			string t;
			iss >> t;
			v.push_back(t);
		}
		calc();
		cout << ans << endl;
	}
};

void cPol::calc()
{
	for (vector<string>::iterator it = v.begin(); it < v.end(); ++it)
	{
		if (!opStrToChar(*it))
		{
			ss.push(std::stoi(*it));
		}
		else
		{
			int a, b;
			b = ss.top();
			ss.pop();
			a = ss.top();
			ss.pop();
			switch (opStrToChar(*it))
			{
				case '+': ss.push(a + b); break;
				case '-': ss.push(a - b); break;
				case '*': ss.push(a * b); break;
				case '/': ss.push(a / b); break;
				default: break;
			}
		}
	}
	ans = ss.top();
	ss.pop();
}

char cPol::opStrToChar(const string &s)
{
	if (s == "+")
	{
		return '+';
	}
	else if (s == "-")
	{
		return '-';
	}
	else if (s == "*")
	{
		return '*';
	}
	else if (s == "/")
	{
		return '/';
	}

	return 0;
}

int main()
{
	string o;
	getline(cin, o);

	cPol cp(o);

	return 0;
}