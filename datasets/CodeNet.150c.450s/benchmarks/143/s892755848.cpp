#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
const int INFTY =2147483647;
int main(){
    int n,b,c,q,a;
    int A[100005]={};
    ll ans=0;
    cin>>n;
    REP(i,n){
        cin>>a;
        A[a]++;
        ans+=a;
    }
    cin>>q;
    REP(i,q){
        cin>>b>>c;
        ans+=(c-b)*(A[b]);
        A[c]+=A[b];
        A[b]=0;
        cout<<ans<<endl;
    }
}