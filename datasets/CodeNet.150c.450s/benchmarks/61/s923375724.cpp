#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
const int INF=INT_MAX,MOD=1e9+7;

int main(){
	int n;
	while(cin>>n&&n){
		int a,b,c,x; cin>>a>>b>>c>>x;
		int y[n]; rep(i,n) cin>>y[i];

		int ans=-1,lille=0;
		for(int frame=0;frame<=10000;frame++){
			if(frame) x=(a*x+b)%c;
			if(x==y[lille]){
				lille++;
			}
			if(lille==n){
				ans=frame;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

