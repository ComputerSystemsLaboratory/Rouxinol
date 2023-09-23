#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	bool notPrime[1000001];
	fill(notPrime,notPrime+1000001,0);
	notPrime[0]=notPrime[1]=true;
	for(int i = 2; i < 1000001; ++i)
	{
		if(notPrime[i]) continue;
		for(int j = i*2; j < 1000001; j+=i)
		{
			notPrime[j]=true;
		}
	}

	int a,d,n;
	while(cin>>a>>d>>n,a) 
	{
		int ans,cnt=0;
		for(int i = a; i < 1000001; i+=d)
		{
			if(!notPrime[i])
			{
				cnt++;
				if(cnt==n)
				{
					ans=i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
  return 0;
}