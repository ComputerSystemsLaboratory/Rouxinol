#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
int main(){
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0&&m==0) break;
		vector<pair<int,int>> a;
		int ans=0;
		lp(i,n){
			int b,c;
			cin>>b>>c;
			ans+=b*c;
			a.push_back(make_pair(c,b));
		}
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		int i=0;
		while(1){
			if(m>a[i].second){
				m-=a[i].second;
				ans-=a[i].first*a[i].second;
			}
			else{
				ans-=m*a[i].first;
				break;
			}
			if(ans==0) break;
			i++;
		}
		cout<<ans<<endl;
	}

	return 0;
}
