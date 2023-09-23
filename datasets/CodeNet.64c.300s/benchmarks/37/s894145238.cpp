#include<iostream>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int sum(int b,int len)
{
	int ret=0;
	rep(i,len)ret+=b+i;
	return ret;
}

int main(){
	int n;
	while(cin>>n,n)
	{
		int ans=0;
		for(int len=2;len<=n;len++)
		for(int b=1;b<=n;b++)
		{
			int s=sum(b,len);
			if(s==n)ans++;
			if(s>n)break;
		}
		cout<<ans<<endl;
	}
	return 0;
}