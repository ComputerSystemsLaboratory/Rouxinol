#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

signed main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n+m==0) break;
		vi h(n),w(m);
		rep(i,0,n) cin>>h[i];
		rep(i,0,m) cin>>w[i];
		vi a,b;
		rep(i,0,n){
			int tmp=0;
			rep(j,i,n){
				tmp+=h[j];
				a.push_back(tmp);
			}
		}
		rep(i,0,m){
			int tmp=0;
			rep(j,i,m){
				tmp+=w[j];
				b.push_back(tmp);
			}
		}
		int ans=0;
		sort(all(b));
		sort(all(a));
		rep(i,0,a.size()){
			ans+=upper_bound(all(b),a[i])-lower_bound(all(b),a[i]);
		}
		o(ans);
	}
}