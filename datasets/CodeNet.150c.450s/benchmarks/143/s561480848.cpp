#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5+69;
int cnt[MAXN];
int n;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    int ans = 0;
    for(int i=1;i<=100000;i++)ans+=i*cnt[i];
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        ans-=x*cnt[x];
        ans+=y*cnt[x];
        cnt[y]+=cnt[x];
        cnt[x]=0;
        cout<<ans<<'\n';
    }
}
