#include<bits/stdc++.h>
#define name first
#define lt second

using namespace std;

const int MAXN=100000;

typedef pair<string,int> psi;

int main()
{
	queue<psi> que;
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;i++)
	{
		string s;
		int t;
		cin>>s>>t;
		que.push(make_pair(s,t));
	}
	int time=0;
	while(!que.empty())
	{
		psi qt=que.front();
		que.pop();
		if(qt.lt<=q)
		{
			time+=qt.lt;
			cout<<qt.name<<' '<<time<<endl;
		}
		else
		{
			time+=q;
			qt.lt-=q;
			que.push(qt);
		}
	}
	return 0;
}