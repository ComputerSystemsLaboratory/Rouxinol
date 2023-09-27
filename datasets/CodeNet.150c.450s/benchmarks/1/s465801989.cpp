#ifdef BUILT_LOCAL

#include "niklib.h"

#endif

#include <iostream>
#include <utility>
#include <numeric>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cstdio>
#include <map>
#include <cmath>
#include <set>
#include <list>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef __int128 lll;
constexpr ll mod = 1000000007;

#define bs(n) (1ull<<(ull)(n))
#define rep(i, n) for(ll (i) = 0;(i) < (n);(i)++)

int main() {
    int n, p[200000];
    cin >> n;
    rep(i, n)cin >> p[i];
    int l[200000], r = 0;
    rep(i, 200000)l[i] = 2000000000;
    rep(i, n) {
        auto t = lower_bound(l, l + n, p[i]);
        *t = min(*t, p[i]);
        r = max(r, (int) (t - l) + 1);
    }
    cout << r << endl;
}

