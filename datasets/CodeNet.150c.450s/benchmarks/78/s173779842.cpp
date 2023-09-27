#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
#define MP make_pair
#define INF (sizeof(int) == 4 ? 1e9:1e18)
#define EPS 0.0000000001
using namespace std;
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
template<typename Head, typename Value> auto vectors(const Head &head, const Value &v) { return vector<Value>(head, v); }
template<typename Head, typename... Tail> auto vectors(Head x, Tail... tail) { auto inner = vectors(tail...); return vector<decltype(inner)>(x, inner); }
template<class T> void join(T a){int b=0;for(auto itr :a){if(b++!=0)cout << " "; cout << itr;} }
using ll  = long long;
using ld  = long double;
using pii = pair<int,int>;
using piii = pair<int,pii>;
int W,H;
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
bool valid(int x,int y){return (0<=x&&x<W)&&(0<=y&&y<H);}
signed main(){
    vector<int>csum;
    int cnt = 1;
    for(;;){
        if(csum.size()&&csum.back()  > 1000000)break;
        csum.push_back(cnt*(cnt+1)*(cnt+2)/6);
        cnt ++;
    }
    csum.pop_back();
    int dp1[1000000+1];
    int dp2[1000000+1];
    rep(i,1000000+1)dp1[i] = dp2[i] = INF;
    dp1[0] = dp2[0] = 0;
    rep(i,1000000+1){
        if(dp1[i] == INF)continue;
        rep(j,csum.size()){
            if(i + csum[j] > 1000000 || csum[j]%2==0)continue;
            cmin(dp1[i+csum[j]],dp1[i]+1);
        }
    }
    rep(i,1000000+1){
        if(dp2[i] == INF)continue;
        rep(j,csum.size()){
            if(i + csum[j] > 1000000)continue;
            cmin(dp2[i+csum[j]],dp2[i]+1);
        }
    }
    int n;
    while(cin >> n,n){
        cout << dp2[n] << " " << dp1[n] << endl;
        
    }
}


