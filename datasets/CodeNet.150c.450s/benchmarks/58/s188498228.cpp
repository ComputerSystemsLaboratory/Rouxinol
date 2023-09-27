#include <string>
#include <stack>
#include <stdlib.h>
#include <iostream>
using namespace std;
int a, b,c;

int main()
{
	string word;
	stack <int> S;
	while (cin >> word)
	{
		if (word == "+")
		{
			a = S.top(); S.pop();
			b = S.top(); S.pop();
			S.push(a + b);
		}
		else if (word == "-")
		{
			a = S.top(); S.pop();
			b = S.top(); S.pop();
			S.push(b - a);
		}
		else if (word == "*")
		{
			a = S.top(); S.pop();
			b = S.top(); S.pop();
			S.push(a * b);
		}
		else
		{
			c = atoi(word.c_str());
			S.push(c);
		}
	}
	cout << S.top() << endl;
	return 0;
}
