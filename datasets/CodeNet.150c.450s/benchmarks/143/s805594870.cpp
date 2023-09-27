#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[214514],cnt[214514];
int main(){
	ll n;
	cin>>n;
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		cnt[a[i]]++;
	}
	ll q;
	cin>>q;
	for(int i=0;i<q;i++){
		ll b,c;
		cin>>b>>c;
		sum+=cnt[b]*(c-b);
	  cnt[c]+=cnt[b];
		cnt[b]=0;
		cout<<sum<<endl;
	}
	return 0;
}
