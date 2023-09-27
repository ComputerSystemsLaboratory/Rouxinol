#include<bits/stdc++.h>

using namespace std;

int main()
{
	list<int> li;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char s[20];
		int t;
		scanf("%s",s);
		if(s[6]==0) scanf("%d",&t);
		if(s[0]=='i') li.push_front(t);
		else if(s[6]==0)
		{
			for(list<int>::iterator it=li.begin();it!=li.end();++it)
				if(*it==t)
				{
					li.erase(it);
					break;
				}
		}
		else if(s[6]=='F') li.pop_front();
		else if(s[6]=='L') li.pop_back();
	}
	for(list<int>::iterator it=li.begin();it!=li.end();)
	{
		printf("%d",*it);
		printf("%c",(++it)==li.end()?'\n':' ');
	}
	return 0;
}