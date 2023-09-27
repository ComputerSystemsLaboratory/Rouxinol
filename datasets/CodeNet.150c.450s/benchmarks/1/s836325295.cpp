#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <climits>
#include <cassert>

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

#define pb push_back
#define mp make_pair

// ?§£??¬??????????????????????£?
// ?????¬???p65??¨??????

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    REP(n, N) cin >> A[n];

    int INF = 1e9;
    vector<int> dp(N+1, INF);
    REP(i, N) {
        auto a = A[i];
        *lower_bound(ALL(dp), a) = a;
    }
    auto it2 = lower_bound(ALL(dp), INF);
    cout << (it2 - dp.begin()) << endl;
    return 0;
}