#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define ff first 
#define ss second  
typedef pair<int,int> pp;
bool com(pp x,pp y){
    return x.ff<y.ff;
} 
int N=1e5+9;
ll power(ll x,ll y){
    ll prod=1;
    while(y){
        if(y&1){
            prod=(prod*x)%mod;
        }
        x=(x*x)%mod;
        y/=2;
    }
    return prod;
}
ll modinverse(ll x){
    return power(x,mod-2);
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	int n,k;
	cin>>n>>k;
	ll a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=k+1,j=1;i<=n;i++,j++){
	    if(a[i]>a[j]) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0; 
	
}
