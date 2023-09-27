#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<(int)n;i++)
using namespace std;
int main ()
{
	int n,m;
	while(cin>>n>>m&&n)
	{
		vector<pair<int,int > >a;
		pair<int,int> x;
		rep(i,n){
			cin>>x.second>>x.first;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		int ans=0;
		rep(i,n)
		{
			m-=a[i].second;
			a[i].second=0;
			if(m<0)
			{
				a[i].second-=m;
				break;
			}
		}
		rep(i,n)
		{
			ans+=a[i].first*a[i].second;
			
		}
		cout<<ans<<endl;
		
		
	}
	
}