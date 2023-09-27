//Scoring

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define nvarep(n,a) ll n;cin>>n;vector<ll>a(n);rep(i,0,n)cin>>a[i]
#define vecrep(n,a,type) vector<type>a(n);rep(i,0,n)cin>>a[i]
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
using p = pair<ll,ll>;
using graph = vector<vector<ll>>;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18

int d,m{},c[26];
vector<vector<int>>s;
vector<int>t;
vector<int>last(26,0);

void scr(int day){
    m+=s[day][t[day]];
    last[t[day]]=day+1;
    rep(i,0,26)m-=c[i]*(day+1-last[i]);
}

signed main (){
    cin>>d;
    rep(i,0,26)cin>>c[i];
    s.resize(d);
    rep(i,0,d){
        s[i].resize(26);
        rep(j,0,26)cin>>s[i][j];
    }
    t.resize(d);
    rep(i,0,d)cin>>t[i];
    rep(i,0,d)t[i]--;

    rep(i,0,d){
        scr(i);
        cout<<m<<nnn;
    }
    return 0;
}