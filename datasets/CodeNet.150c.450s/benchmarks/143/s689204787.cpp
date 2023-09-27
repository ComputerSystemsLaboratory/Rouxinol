#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a(100005,0);
int main() {
	int n,k;
	cin>>n;
	ll sum=0;
	for(int i=0;i<n;i++){
	    cin>>k;
	    a[k]++;
	    sum+=(ll)k;
	}
	int q;
	cin>>q;
	while(q--){
	    ll b,c;
	    cin>>b>>c;
	    sum-=(a[b]*b);
	    sum+=(a[b]*c);
	    a[c]+=a[b];
	    a[b]=0;
	    cout<<sum<<endl;
	}
	return 0;
}
