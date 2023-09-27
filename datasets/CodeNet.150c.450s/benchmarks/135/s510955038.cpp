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
    int a,b;
    while(cin >> a >> b, a + b){
        vector<int>h,w;
        h.push_back(1);
        w.push_back(1);
        map<int,int>v,u;
        rep(i,a){
            int t; cin >> t;
            int temp = h.back();
            h.push_back(temp+t);
            v[temp+t] = 1;
        }
        v[1] = u[1] = 0;
        rep(i,b){
            int t; cin >> t;
            int temp = w.back();
            w.push_back(temp+t);
            u[temp+t] = 1;
        }
        map<int,int>mp;
        for(int i = 0; i< w.size();i++){
            for(int j = i+1; j<w.size();j++){
                mp[w[j]-w[i]]++;
            }
        }
        int ans = 0;
        for(int i = 0; i< h.size();i++){
            for(int j = i+1; j<h.size();j++){
                ans += mp[h[j]-h[i]];
            }
        }
        cout << ans << endl;
    }
}


