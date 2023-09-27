#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vector<int> >
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
using ll = long long;
using ld =long double;
//#define int ll
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<int,pii> piii;
#define mp make_pair
signed main(){
    int n,m;
    while(cin>>n>>m,n+m){
        vector<pii>res;
        int ans=0;
        rep(i,n){
            int a,b; cin>>a>>b;
            ans+=a*b;
            res.push_back(mp(b,a));
        }
        sort(all(res),greater<pii>());
        rep(i,res.size()){
            if(m-res[i].second>0){
                ans-=res[i].first*res[i].second;
                m-=res[i].second;
            }else{
                ans-=m*res[i].first;
                break;
            }
        }
        cout<<ans<<endl;
    }
}