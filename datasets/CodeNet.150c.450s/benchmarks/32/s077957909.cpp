#include <bits/stdc++.h>
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
#define rer(i, a, b) for(ll i = ll(a) - 1; i >= ll(b); i--)
#define sz(v) (int)(v).size()
#define pb push_back
#define sc second
#define fr first
#define sor(v) sort(v.begin(),v.end())
#define rev(s) reverse(s.begin(),s.end())
#define lb(vec,a) lower_bound(vec.begin(),vec.end(),a)
#define ub(vec,a) upper_bound(vec.begin(),vec.end(),a)
#define uniq(vec) vec.erase(unique(vec.begin(),vec.end()),vec.end())
using namespace std;
typedef long long int ll;
typedef pair <int, int> P;

const ll MOD=1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(;;){
        int m,n,N;
        cin>>m;
        if(!m) return 0;
        cin>>n>>N;
        vector<int> p(m);
        rep(i,0,m) cin>>p[i];
        int ma=-1;
        rep(i,n,N+1){
            ma=max(ma, p[i-1]-p[i]);
        }
        rer(i,N+1,n){
            if(ma==p[i-1]-p[i]){
                cout <<i<<"\n";
                break;
            }
        }
    }
}
