#include<bits/stdc++.h>
using namespace std;

bool prime[10000005];
int p[700000]; 
int main()
{	
	int k=0;
	prime[0]=1;
	prime[1]=1;
	for(int i=2;i<=999999;++i)
	{
		if(prime[i]==0)
		{	
			p[k++]=i;		
			for(int j=i+i;j<=999999;j+=i)	
			{
				prime[j]=1;
			}
		}
	}
	int n;
	while(cin>>n){
		//for(int i=0;i<10;++i)cout<<p[i]<<endl;
		int ans = lower_bound(p,p+k,n)-p;
		//cout<<p[ans]<<endl;
		if(p[ans]==n)ans++;
		cout<<ans<<endl;
	} 

}