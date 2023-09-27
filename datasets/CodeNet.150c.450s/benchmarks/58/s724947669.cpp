#include<iostream>
#include<stack>
#include<string>
#include<stdlib.h>
using namespace std;


int main()
{
	stack<int> s;
	string str;
	
	while(cin >> str)
	{
		switch(str[0])
		{
			case '+':
			{
				int a = s.top(); s.pop();
				int b = s.top(); s.pop();
				s.push(a+b);
				break;	
			}
			case '-':
			{
				int a = s.top(); s.pop();
				int b = s.top(); s.pop();
				s.push(b-a);break; 		
			}
			case '*':
			{
				int a = s.top(); s.pop();
				int b = s.top(); s.pop();
				s.push(a*b);break;		
			}
			case '/':
			{
				int a = s.top(); s.pop();
				int b = s.top(); s.pop();
				s.push(b/a);break;		
			}
			default:s.push(atoi(str.c_str()));	
		}
	}
	cout<<s.top()<<endl;
}