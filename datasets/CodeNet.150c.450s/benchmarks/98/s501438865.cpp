#include<iostream>
#include<string>
#include<cmath>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m && n && m)
	{
		int card1[100000]={};
		int card2[100000]={};
		int sum1=0,sum2=0,mi,sum3=0;
		int ans[3]={};
		
		rep(i,n)
		{
			cin>>card1[i];
			sum1+=card1[i];
		}
		rep(i,m)
		{
			cin>>card2[i];
			sum2+=card2[i];
		}
		
		mi=sum1+sum2;
		
		rep(i,n)
		{
			rep(j,m)
			{
				if( sum1-card1[i]+card2[j] == sum2-card2[j]+card1[i] )
				{
					sum3=card1[i]+card2[j];
					mi=min(sum3,mi);
					
					if(sum3==mi)
					{
						ans[0]=card1[i];
						ans[1]=card2[j];
					}
				}
			}
		}
		if(ans[0])cout<<ans[0]<<" "<<ans[1]<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}