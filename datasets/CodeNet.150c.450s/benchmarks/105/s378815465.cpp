#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,n,m) for(int i=(int)(n); i<=(int)(m); i++)
#define RFOR(i,n,m) for(int i=(int)(n); i>=(int)(m); i--)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define RITR(x,c) for(__typeof(c.rbegin()) x=c.rbegin();x!=c.rend();x++)
#define setp(n) fixed << setprecision(n)

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>

#define all(a) (a.begin()),(a.end())
#define rall(a) (a.rbegin()),(a.rend())
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ins insert

using namespace std;

/* Some Libraries */

//-------------------------------------------------

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t; cin>>t;
    while(t--){
        int N; cin>>N;
        vll a(N);
        rep(i,N) cin>>a[i];
        string S; cin>>S;
        vll Base;

        auto update = [&](ll x){
            Base.pb(x);
            int M = Base.size();
            int k=0;
            rep(i,60){
                bool find=false;
                FOR(j,k,M-1)if(Base[j]>>i&1){
                    swap(Base[k],Base[j]);
                    find=true;
                    break;
                }
                if (!find) continue;
                rep(j,M)if(j!=k && Base[j]>>i&1){
                    Base[j]^=Base[k];
                }
                k++;
            }
            if (Base.back()==0){
                Base.pop_back();
                return true;
            }
            return false;
        };

        int ans=0;
        RFOR(i,N-1,0){
            if (!update(a[i]) && S[i]=='1'){
                ans=1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
