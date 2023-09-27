#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;
 
const ll INF=(1ll<<31)-1;
int a[100001];
int b[1005];
int main(){
    int n,q;
    cin>>n>>q;
    int sqn=sqrt(n);
    int bn=(n+sqn-1)/sqn;
    rep(i,n) a[i]=0;
    rep(i,bn) b[i]=0;
    int com;
    rep(i,q){
        cin>>com;
        if(com==0){
            int k,x;
            cin>>k>>x;
            --k;
            a[k]+=x;
            int cur=k/sqn; 
            b[cur]+=x;
        }
        if(com==1){
            //[s,t)
            int s,t;
            cin>>s>>t;
            --s;
            int ans=0;
            rep(j,bn+1){
                int l=j*sqn,r=(j+1)*sqn;
                if(r<=s||t<=l) continue;
                if(s<=l&&r<=t) ans+=b[j];
                else{
                    FOR(k,max(s,l),min(t,r)){
                        ans+=a[k];
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
