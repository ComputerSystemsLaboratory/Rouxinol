#include <bits/stdc++.h>
using namespace std;
/*  Writen by : AS7
 *  "JUST KEEP GOING..."
 */
#define endl			'\n'
#define ll				long long
#define all(v)			((v).begin()), ((v).end())
#define allr(v)			((v).rbegin()), ((v).rend())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define For(i,s)        for(auto i:s)
#define Forr(i,s)        for(auto &i:s)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
#define vi				vector <int>
#define vl				vector <ll>
#define ii				pair <int,int>
#define vii				vector <ii>
#define vll				vector <pair<ll,ll>>
#define PI				double PPPPPP = 3.14159265358979323846;
#define bit(mask,i) ((mask>>i)&1)
const int N = 2e5+5;
int n,m,k;
char grid[10][10],arr[10][10];
map<vector<int>,bool> vis;
ll ans;
int get_ans(ll x,ll y,ll z){
    vi v(3);
    v[0]=x;
    v[1]=y;
    v[2]=z;
    sort(all(v));
    if(vis[v])return 0;
    vis[v]=1;
    if(v[0]==v[2])
        return 1;
    if(v[1]==v[2])
        return 3;
    if (v[0]==v[1])
        return 3;
    return 6;
}
void solve(){
    ll n;
    cin>>n;
    for(ll i=1;i<=n;++i){
        int ans=0;
        for (ll x = 1; x <=100 ; ++x) {
            if(x*x+x+x+1+1+1>i)
                break;
            for (ll y = 1; y<=100 ; ++y) {
                if (x*x+y*y+x*y+x+y>i)
                    break;
                for (ll z = 1; z<=100 ; ++z) {
                    if (x*x+y*y+z*z+x*y+x*z+z*y<i)
                        continue;
                    if(x*x+y*y+z*z+x*y+x*z+z*y==i)
                        ans+=get_ans(x,y,z);
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
int main() {
    int t = 1;
  //  cin>>t;
    while (t--)solve();
}