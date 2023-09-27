#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
const int N=100001;
ll n,a[N],ans=1;
ll dp[N];

int main(){
	cin>>n;
	FOR(i,0,n){
		cin>>a[i];
	}
	fill(dp,dp+n,1e9+1);
	FOR(i,0,n){
		*lower_bound(dp,dp+n,a[i])=a[i];
	}
	cout<<lower_bound(dp,dp+n,1e9+1)-dp<<endl;
	return 0;
}
