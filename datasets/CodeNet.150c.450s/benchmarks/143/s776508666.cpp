#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll Maxn=1e5+10;
map <ll,ll> cnt;
ll a[Maxn];
int main() {
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=1;i<=n;i++)    cin>>a[i],cnt[a[i]]++,sum+=a[i];
    ll q;
    cin>>q;
    for(ll i=1;i<=q;i++){
        ll b,c;
        cin>>b>>c;
        ll now=cnt[b];
        cnt[c]+=cnt[b];
        cnt[b]=0;
        sum+=(c-b)*now;
        cout<<sum<<endl;
    }
    return 0;
}
