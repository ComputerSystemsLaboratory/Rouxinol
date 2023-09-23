#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

signed main(){
    int n,s;
    while(cin>>n>>s,n||s){
        int ans=0;
        rep(i,1<<10){
            int cnt=0,sum=0;
            rep(j,10){
                if(i>>j&1){
                    cnt++;
                    sum+=j;
                }
            }
            if(cnt==n&&sum==s)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}