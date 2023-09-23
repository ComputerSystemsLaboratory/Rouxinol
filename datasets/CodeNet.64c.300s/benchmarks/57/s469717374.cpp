#include<iostream>

using namespace std;

int r,c;
bool v[10];
int s[10][10000];

int solve(int n)
{
	if(n<r)
	{
		v[n]=false;
		int a1=solve(n+1);
		v[n]=true;
		int a2=solve(n+1);
		return max(a1,a2);
	}
	else
	{
		int ans=0,tmp;
		for(int i=0;i<c;i++)
		{
			tmp=0;
			for(int j=0;j<r;j++)
			{
				if((!v[j]&&s[j][i])||(!s[j][i]&&v[j]))tmp++;
			}
			ans+=max(tmp,r-tmp);
		}
		return ans;
	}
}

int main()
{
	while(cin>>r>>c,r)
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin>>s[i][j];
			}
		}
		cout<<solve(0)<<endl;
	}
	return 0;
}