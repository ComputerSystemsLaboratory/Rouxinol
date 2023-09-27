#include<cstdio>
#include<cstdlib> 
#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main()
{
	string str[105];
	int i = 0;
	stack<int> s;
	while(cin>>str[i])
	{
		int a1, a2;
		if(str[i]=="+")
		{
			a1 = s.top(); s.pop();
			a2 = s.top(); s.pop();
			s.push(a1 + a2);
		}
		else if(str[i] == "-")
		{
			a1 = s.top(); s.pop();
			a2 = s.top(); s.pop();
			s.push(a2 - a1);
		}
		else if(str[i] == "*")
		{
			a1 = s.top(); s.pop();
			a2 = s.top(); s.pop();
			s.push(a1 * a2);
		}
		else
		{
			s.push(atoi(str[i].c_str()));
		}
	}
	printf("%d\n", s.top());
	return 0;
}