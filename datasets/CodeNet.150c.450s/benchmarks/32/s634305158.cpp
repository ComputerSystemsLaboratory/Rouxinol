#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,nmi,nma;
	while(cin>>m>>nmi>>nma,m)
	{
		--nmi,--nma;
		int p[m];
		for (int i = 0; i < m; ++i) cin>>p[i];
		int ans=-1,gap=-1;
		for (int i = nmi; i <= nma; ++i)
		{
			if(p[i]-p[i+1]>=gap) ans=i,gap=p[i]-p[i+1];
		}
		cout<<ans+1<<endl;
	}
	return 0;
}
