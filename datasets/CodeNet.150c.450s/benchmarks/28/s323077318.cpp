#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)

typedef long long ll;

const int INF = 1<<29;

ll N, K;
vector <int> v;

//ある最大積載量の時にそれがokか否か判定する関数
bool check(ll c) {
    //現在の積載量,トラックを何回交代したか
    ll tmp = 0LL, cnt = K-1;
    rep(N, i) {
        //最大積載量より重い荷物が来ればfalse
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

    //ok以上はok、ok未満はng
    ll ok = INF, ng = 0LL;
    //差が位置になるまで（okとngの境界がわかるまで）探索
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

