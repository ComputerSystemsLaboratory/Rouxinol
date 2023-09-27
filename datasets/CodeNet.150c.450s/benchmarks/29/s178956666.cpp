#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,i,len,m,j,q,T=0;
	char c[20];
	list<int> v;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c;
		if(c[0]=='i') {cin>>m;v.push_front(m);}
		else if(c[6]=='L') v.pop_back();
		else if(c[6]=='F') v.pop_front();
		else
		{
			cin>>m;
			for(list<int>::iterator it=v.begin();it!=v.end();it++)
				if(*it==m)
				{
					v.erase(it);
					break;
				}
		}
	}
	 i=0;
	for(list<int>::iterator it=v.begin();it!=v.end();it++)
	{
		if(i++) cout<<' ';
		cout<<*it;
	}
	cout<<'\n';
    return 0;
}