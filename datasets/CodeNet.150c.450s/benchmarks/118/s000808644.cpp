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
#define int ll
signed main(){
    int n;
    int all = 0;
    for(int i = 1; i<=999;i++){
        for(int j = 1; j <= 10;j++){
            if(i%3 == 0)all+=20;
            else if(j%2)all+=20;
            else all+=19;
        }
    }
    cin >> n;
    rep(i,n){
        int y,m,d; cin >> y >> m >> d;
        int sum = 0;
        for(int i = 1; i<=y-1;i++){
            for(int j = 1; j <= 10;j++){
                if(i%3 == 0)sum+=20;
                else if(j%2)sum+=20;
                else sum+=19;
            }
        }
        for(int j = 1; j<=m-1;j++){
            if(j%2 || y%3 == 0)sum+=20;
            else sum+=19;
        }
        sum += d-1;
        cout << all - sum<< endl;
    }
}


