#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define repr(i,n) for(int i=(int)(n-1);i>=0;i--)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout << #x" = " << x << endl
#define print(x) cout << x << endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<int, P> PIP;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;
typedef set<int> S;

#define INF INT_MAX/3
#define MAX_N 1000000001


int main(){
  cin.sync_with_stdio(false);
  int n, m, tmp;
  while(cin >> n >> m, n | m) {
    vector<int> w, h;
    rep(i, n) cin >> tmp, h.pb(tmp);
    rep(i, n - 1) {
      tmp = h[i];
      repl(j, i + 1, n) tmp += h[j], h.pb(tmp);
    }

    rep(i, m) cin >> tmp, w.pb(tmp);
    rep(i, m - 1) {
      tmp = w[i];
      repl(j, i + 1, m) tmp += w[j], w.pb(tmp);
    }

    sort(all(h)); sort(all(w));
    int i = 0, j = 0;
    ll ans = 0;
    while(i < h.size() && j < w.size()) {
      if (h[i] < w[j]) i++;
      else if (h[i] > w[j]) j++;
      else {
        tmp = h[i];
        int a = 0, b = 0;
        while(i < h.size() && h[i] == tmp) i++, a++;
        while(j < w.size() && w[j] == tmp) j++, b++;
        ans += a * b;
      }
    }

    cout << ans << endl;
  }

  return 0;
}