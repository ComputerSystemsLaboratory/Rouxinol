#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <functional>
#include <assert.h>
using ll=long long;
#define int ll
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define SZ(x) x.size()
#define fi first
#define se second
const int INF = 1e9;
using namespace std;

template<class T> using vc=vector<T>;
template<class T> using vvc=vc<vc<T>>;

using pi=pair<int,int>;
using vi=vc<int>;

template<class T>
inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T>
inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout<<fixed<<setprecision(20);

    while(true){
        int N,A,B,C,X; cin >> N >> A >> B >> C >> X;
        if(N==0) break;
        int Y[N]; rep(i,N) cin >> Y[i];
        vi v;
        v.eb(X);
        int now=X;
        rep(i,10000){
            now=(A*now+B)%C;
            v.eb(now);
        }
        int pos=0;
        int ans=-1;
        rep(i,10001){
            if(Y[pos]==v[i]) pos++;
            if(pos==N) {
                ans=i;
                break;
            }
        }
        cout << ans << "\n";
    }
}
