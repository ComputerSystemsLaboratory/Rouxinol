#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define N 200005
#define INF 1000000005
#define INFLL (long long)1e18
#define PI 3.1415926535897
typedef long long ll;
#define ALL(v) (v).begin(),(v).end()
#define SZ(x) int(x.size())
#define IN(a) cin>>(a)
#define OUT(a) cout<<(a)<<endl
typedef pair<int,int> P;
const int MAX = 1000005;
const int MOD = 1000000007;
int main(){
    int n,q;
    cin>>n;
    map<int,int>m;
    ll sum=0;
    REP(i,n){
        int a;
        cin>>a;
        sum+=a;
        m[a]++;
    }
    cin>>q;
    vector<P>a(q);
    REP(i,q){
        cin>>a[i].first>>a[i].second;
    }
    REP(i,q){
        int x=m[a[i].first];
        m[a[i].first]=0;
        m[a[i].second]+=x;
        sum+=(a[i].second-a[i].first)*x;
        OUT(sum);
    }
    return 0;
}
