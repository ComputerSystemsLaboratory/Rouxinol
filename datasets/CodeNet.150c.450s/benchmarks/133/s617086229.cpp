#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
#define rep2(i,a,n) for(int i=a;i<n;i++)
#define been(ix) (ix).begin(),(ix).end()
using namespace std;
typedef long long ll; 
typedef vector<int> vi;
typedef vector<long long> vl;
const ll INFL = 1e18;
const int INF = 1001001001; 
typedef pair<int,int> P;
#define foreach(ix,i) for(auto& (ix) : (i))
typedef long double ld;
const int mod =1000000007;
const double PI = acos(-1);
int main(){
    int d;cin>>d;
    ll c[26];
    rep(i,26)cin>>c[i];
    ll s[d][26];
    rep(i,d)rep(j,26)cin>>s[i][j];
    ll t[d];
    rep(i,d){
        cin>>t[i];
        t[i]--;
    }
    ll v=0;
    vi pas(26,0);
    rep(i,d){
        v+=s[i][t[i]];
        pas[t[i]]=i+1;
        rep(j,26){
            if(j==t[i])continue;
            v-=c[j]*(i+1-pas[j]);
        }
        cout<<v<<endl;
    }
}