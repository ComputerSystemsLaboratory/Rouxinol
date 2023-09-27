#include<bits/stdc++.h>
#define LOCAL
using namespace std;
int main()
{
    //input
    stack<int> s;
	char tem[7];
	int a,b,tem2;
    while(cin>>tem)
    {
    	//algorithm 如何区分运算符和数 并转化？？？ 遇到数进栈 遇到运算符出栈两个数并运算 再将结果入栈 重复
    	if(tem[0]=='+')
    	{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			tem2=b+a;
		}
    	else if(tem[0]=='-')
    	{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			tem2=b-a;
		}
    	else if(tem[0]=='*')
    	{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			tem2=b*a;
		}
    	else
		{
			stringstream ss;
			ss<<tem;
			ss>>tem2;
		}
		s.push(tem2);
    }
    //output
    cout<<s.top()<<'\n';
    return 0;
}
