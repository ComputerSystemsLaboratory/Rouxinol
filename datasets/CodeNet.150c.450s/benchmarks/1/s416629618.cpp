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
#define pb(x) push_back(x)
#define uniq(x) (x).erase(unique(all(x)),(x).end())


void solve(void){
    int N;
    cin >> N;
    vector <int> v;
    rep(N, i) {
        int d;
        cin >> d;
        if (i == 0) {
            v.pb(d);
            continue;
        }
        if (lower_bound(all(v), d) == v.end()) {
            v.pb(d);
        }
        else v[lower_bound(all(v), d) - v.begin()] = d;
    }
    cout << (int)v.size() << endl;
}

int main(void){
  solve();
  //cout << "yui(*-v・)yui" << endl;
  return 0;
}

