#include<iostream>
using namespace std;
int x,y,ans;
int m[10][10000];
bool rev[10];

int cnt()
{
	int tmp=0;
	for(int i=0;i<x;i++)
	{
		int xcnt=0;
		for(int j=0;j<y;j++)
		{
			if(rev[j]&&!m[j][i]||!rev[j]&&m[j][i]) xcnt++;
		}
		if(xcnt<y-xcnt) tmp+=y-xcnt;
		else tmp+=xcnt;
	}
	return tmp;
}

void solve(int pos)
{
	if(pos==y)
	{
		ans=max(ans,cnt());
		return;
	}

	rev[pos]=true;
	solve(pos+1);
	rev[pos]=false;
	solve(pos+1);
	return;
}

int main()
{
	while(cin>>y>>x,y)
	{
		for(int i=0;i<y;i++)
		{
			for(int j=0;j<x;j++)
				cin>>m[i][j];
		}

		solve(0);
		cout<<ans<<endl;
	}
	return 0;
}
	