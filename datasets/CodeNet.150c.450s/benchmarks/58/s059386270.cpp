#include<iostream>
#include<stack>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
char aho[3] = { '+', '-', '*' };
int main()
{
	char s[150];
	int x;
	stack<int> stk;
	while (scanf("%s", s) != EOF)
	{
		if (s[0] == '+')
		{
			int h = stk.top();
			stk.pop();
			h += stk.top();
			stk.pop();
			stk.push(h);
		}
		else if (s[0] == '-')
		{
			int h = stk.top();
			stk.pop();
			int j = stk.top();
			stk.pop();
			h = j - h;
			stk.push(h);
		}
		else if (s[0] == '*')
		{
			int h = stk.top();
			stk.pop();
			h *= stk.top();
			stk.pop();
			stk.push(h);
		}
		else { 
			x = atoi(s);
			stk.push(x);
		}
	}
	cout << stk.top()<<endl; return 0;
}