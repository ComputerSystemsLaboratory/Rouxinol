#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n,n)
	{
		int c=1000-n,ans=0;
		while(c>=500) c-=500,++ans;
		while(c>=100) c-=100,++ans;
		while(c>=50) c-=50,++ans;
		while(c>=10) c-=10,++ans;
		while(c>=5) c-=5,++ans;
		while(c>=1) c-=1,++ans;
		cout<<ans<<endl;
	}
	return 0;
}

