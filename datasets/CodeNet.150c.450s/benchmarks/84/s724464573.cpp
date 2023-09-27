#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 200020;

int N;
int bit[MAX];

void add(int a, int w) {
    for (int x = a; x <= N; x += x&-x) {
        bit[x] += w;
    }
}

int sum(int a) {
    int res = 0;
    for (int x = a; x > 0; x -= x&-x) res += bit[x];
    return res;
}


void solve(void){
    cin >> N;

    ll ans = 0LL;

    vector <int> v(N), vc(N);
    map <int, int> mp;
    rep(N, i) {
        cin >> v[i];
    }
    vc = v;
    sort(all(vc));
    rep(N, i) mp[vc[i]] = i+1;
    rep(N, i) v[i] = mp[v[i]];

    rep(N, i) {
        ans += i-sum(v[i]);
        add(v[i], 1);
    }

    cout << ans << endl;
}

int main(void){
  solve();
  //cout << "yui(*-v・)yui" << endl;
  return 0;
}

