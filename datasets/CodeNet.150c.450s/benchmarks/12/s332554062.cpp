#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define Rep(i,n) for(int i = 1; i <= n; i++)
#define sz(x) int(x.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define YesorNo(a) printf(a ? "Yes\n" : "No\n")
#define endl '\n'
#define fi first
#define se second
using ll = long long;
using P = pair<int,int>;
using Pl = pair<ll,ll>;
template<class T> using V = vector<T>;
const int dx[] = {0,1,0,-1,1,1,-1,-1};
const int dy[] = {1,0,-1,0,1,-1,-1,1};
const int inf = (1<<30)-1;
const ll infll = (1LL<<62)-1;
ll ceil(const ll &a, const ll &b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int p(int x) { return x/2; }
int l(int x) { return 2*x; }
int r(int x) { return 2*x+1; }

int main(){
    int n;
    cin >> n;
    V<int> a(n+1);
    Rep(i,n) cin >> a[i];
    Rep(i,n) {
        printf("node %d: key = %d, ", i, a[i]);
        if(p(i) > 0) printf("parent key = %d, ", a[p(i)]);
        if(l(i) <= n) printf("left key = %d, ", a[l(i)]);
        if(r(i) <= n) printf("right key = %d, ", a[r(i)]);
        printf("\n");
    }
}
