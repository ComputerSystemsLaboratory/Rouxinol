#include <stack>
#include <string>
#include<cstdlib>
#include <iostream>

using namespace std;

int main()
{
	stack<int> data;
	string str[1000];
	int a;
	int b1;
	int b2;
	int c=0;
	while(cin>>str[c]){
		if(str[c]!="+" && str[c]!="-" && str[c]!="*"&& str[c]!="/"){
			a=atoi(str[c].c_str());
			data.push(a);
			c++;
		}
		if(str[c]=="+"){
			b1=data.top();
			data.pop();
			b2=data.top();
			data.pop();
			data.push(b1+b2);
		}
		if(str[c]=="-"){
			b1=data.top();
			data.pop();
			b2=data.top();
			data.pop();
			data.push(b2-b1);
		}
		if(str[c]=="*"){
			b1=data.top();
			data.pop();
			b2=data.top();
			data.pop();
			data.push(b1*b2);
		}
	}
	cout<<data.top()<<endl;
	return 0;
}