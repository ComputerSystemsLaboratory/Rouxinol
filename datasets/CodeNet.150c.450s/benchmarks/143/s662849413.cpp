#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int maxn=1e6+5;
vector<ll> V;
ll cnt[maxn];
int main() {
	ll sum=0;
    int n;cin>>n;
    for(int i=1;i<=n;i++) {
    	int tem;cin>>tem;cnt[tem]++;
    	sum+=tem;
    }
    int q;cin>>q;
    for(int i=1;i<=q;i++) {
    	ll a,b;cin>>a>>b;
    	sum-=cnt[a]*a;
    	sum+=cnt[a]*b;
    	cnt[b]+=cnt[a];
    	cnt[a]=0;
    	cout<<sum<<endl;
    }
    return 0;
}