#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack<int> si;
	char str[10010];
	for(int i=0;(str[i]=getchar())!='\n'?true:(str[i]=0,false);i++);
	for(int i=0;i<strlen(str);i++)
	{
		//printf("%d\n",i);
		if(isdigit(str[i]))
		{
			int t;
			sscanf(&str[i],"%d",&t);
			si.push(t);
			while(isdigit(str[i])) i++;
		}
		else if(str[i]=='+')
		{
			int s1=si.top();si.pop();
			int s2=si.top();si.pop();
			si.push(s1+s2);
			i++;
		}
		else if(str[i]=='-')
		{
			int s1=si.top();si.pop();
			int s2=si.top();si.pop();
			si.push(s2-s1);
			i++;
		}
		else if(str[i]=='*')
		{
			int s1=si.top();si.pop();
			int s2=si.top();si.pop();
			si.push(s1*s2);
			i++;
		}
	}
	printf("%d\n",si.top());
	return 0;
}