#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n=-1,k=-1;
    while(true){
    cin>>n>>k;
    if(n==0&&k==0)break;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<ll> sum(n+1,0);
    rep(i,n)sum[i+1]=sum[i]+a[i];
    ll max=-INF;
    rep(i,n-k){
        chmax(max,sum[i+k]-sum[i]);
    }
    cout<<max<<endl;
    }
}



