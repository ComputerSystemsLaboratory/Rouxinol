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

const int INF = 1<<29;

ll N, K;
vector <int> v;

bool check(ll c) {
    ll tmp = 0LL, cnt = K-1;
    rep(N, i) {
        if (v[i] > c) return false;
        if (tmp + v[i] > c) {
            cnt--;
            tmp = v[i];
        }
        else {
            tmp += v[i];
        }
        if (cnt < 0) return false;
    }
    return true;
}

void solve(void){
    cin >> N >> K;
    v.resize(N);
    rep(N, i) {
        cin >> v[i];
    }

    ll ok = INF, ng = 0LL;

    while(abs(ok-ng)>1) {
        ll mid = (ok + ng) / 2;
        if (check(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

}

int main(void){
  solve();
  //cout << "yui(*-v・)yui" << endl;
  return 0;
}

