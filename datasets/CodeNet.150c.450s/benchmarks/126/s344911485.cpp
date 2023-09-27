#include<iostream>
using namespace std;
#include<queue>
#include<stdio.h>
int main()
{
	while(1)
	{
		int a,b,x,y,i,c[18][18]={0},n,v=0;
		pair<int,int> s,m;
		queue<pair<int,int> > u;
		cin>>a>>b;
		if(a==0&&b==0)
		break;
		cin>>n;
		for(i=0;i<=a;i++)
		{
			c[i][0]=1;
			c[i][b+1]=1;
		}
		for(i=0;i<=b;i++)
		{
			c[0][i]=1;
			c[a+1][i]=1;
		}
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			c[x][y]=1;
		}
		s.first=1;
		s.second=1;
		m.first=a;
		m.second=b;
		u.push(s);
		while(!u.empty())
		{
			s=u.front();
			u.pop();
			if(c[s.first+1][s.second]!=1)
			{
				s.first++;
				u.push(s);
				s.first--;
			}
			if(c[s.first][s.second+1]!=1)
			{
				s.second++;
				u.push(s);
				s.second--;
			}
			if(s==m)
			{
				v++;
			}
		}
		cout<<v<<endl;
	}
	return 0;
}