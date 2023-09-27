#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <queue>
#include <deque>
#include <stack>
#include <fstream>
#include <cmath>
#include <random>
#include <complex>
#include <functional>
#include <bitset>
#include <sstream>
#include <cassert>
#include <time.h>

#define ll int64_t
#define Rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
typedef vector<ll> vec;
typedef vector<vec> mat;

const ll inf = 1LL << 60;

template<class T> inline void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}
template<class T> inline void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}
void printvec (vec &v) {
    Rep (i, (ll)v.size()) {
        cout << v[i] << " \n"[i+1 == (ll)v.size()];
    }
}

ll D = 365;
vec c(26);
mat s(D, vec(26));
vec last(26, 0);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> D;
    Rep (i, 26) {
        cin >> c[i];
    }
    Rep (i, D) {
        Rep (j, 26) {
            cin >> s[i][j];
        }
    }

    vec t(D);
    Rep (i, D) {
        cin >> t[i];
        t[i]--;
    }

    ll tmp = 0;
    Rep (i, D) {
        tmp += s[i][t[i]];
        Rep (j, 26) {
            if (j != t[i]) tmp -= c[j] * (i+1 - last[j]);
        }
        last[t[i]] = i+1;
        cout << tmp << "\n";
    }
}