#include<bits/stdc++.h>
using namespace std;
#define int long long
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(c) (c).rbegin(),(c).rend()
#define mp make_pair
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
typedef pair<ll,ll> pll;
typedef long double ld;
const ll inf=1e9+7;
const ll mod=998244353;
signed main(){
    ll t;cin>>t;
    while(t){
        t--;
        ll n;cin>>n;
        vector<ll>a(n);
        rep(i,n)cin>>a[i];
        string s;cin>>s;
        bool f=1;
        set<ll,greater<ll> >st;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                for(auto e:st){
                    a[i]=min(a[i],a[i]^e);
                }
                if(a[i])st.insert(a[i]);
            }else{
                for(auto e:st){
                    a[i]=min(a[i],a[i]^e);
                }
                if(a[i])f=0;
            }
        }
        if(f)cout<<0<<endl;
        else cout<<1<<endl;
    }
}