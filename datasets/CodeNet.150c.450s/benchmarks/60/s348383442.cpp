#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cassert>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main() {
    int v,a[100][100]{};
    cin >> v;
    REP(i,v){
        int n,m;
        cin >> n >> m;
        REP(j,m){
            int u;
            cin >> u;
            a[i][u-1]=1;
        }
    }
    REP(i,v){
        cout << a[i][0];
        FOR(j,1,v){
            cout << " " << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
