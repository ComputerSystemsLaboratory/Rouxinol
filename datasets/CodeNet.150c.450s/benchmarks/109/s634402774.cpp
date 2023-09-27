#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const ll INF=1000000000LL;
const ll MOD=1000000007LL;
const ll MAX=100010;
int main(){
	int n;
	while(cin>>n,n){
		vector<P> v;
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
				int h,m,s;
				scanf("%d:%d:%d",&h,&m,&s);
				int t=h*3600+m*60+s;
				if(j){
					v.pb(P(t,-1));
				}else{
					v.pb(P(t,1));
				}
			}
		}
		sort(v.begin(),v.end());
		int ans=0;
		int r=0;
		for(int i=0;i<2*n;i++){
			r+=v[i].second;
			ans=max(r,ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}

