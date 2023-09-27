#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n,n)
	{
		string s;
		bool l=0,r=0,u=0;
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			if(s=="lu") l=1;
			else if(s=="ld") l=0;
			else if(s=="ru") r=1;
			else r=0;
			if(u&&!l&&!r) ++ans,u=0;
			else if(!u&&l&&r) ++ans,u=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
