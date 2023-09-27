#include<bits/stdc++.h>
/*#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<climits>*/
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define rep1(i,a,b) for(int i=a;i<=(b);++i)
#define per(i,a,b) for(int i=a;i>(b);--i)
#define per1(i,a,b) for(int i=a;i>=(b);--i)
#define LL long long
#define inf 0x7f7f7f7f
#define N 35
using namespace std;

int main()
{
	list<int> a;
	char com[20];
	int n,x;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%s",com);
		
		if(com[0]=='i')
		{
			scanf("%d",&x);
			a.push_front(x);
		}
		else if(com[0]=='d')
		{
			if(strlen(com)>6)
			{
				if(com[6]=='F')
					a.pop_front();
				else if(com[6]=='L')
					a.pop_back();
			}
			else
			{
				scanf("%d",&x);
				for(list<int>::iterator it=a.begin();it!=a.end();it++)
				{
					if(*it==x)
					{
						a.erase(it);
						break;
					}
				}
			}
		}
	}
	int i=0;
	for(list<int>::iterator it=a.begin();it!=a.end();it++)
	{
		if(i++) printf(" ");
		printf("%d",*it);
	}
	printf("\n");
}

