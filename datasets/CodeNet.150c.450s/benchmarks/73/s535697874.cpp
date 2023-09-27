//#define LOCAL

#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <climits>
#include <queue>
#include <assert.h>
#include <set>
#include <numeric>
#include <memory.h>

#define FOR(i,a,b) for(int i=a; i<b; i++)
#define REP(i,n) FOR(i,0,n)

//#define int long long
typedef long long ll;

const ll INF = 1e18;

using namespace std;

int bit[300000], n;

int sum(int i)
{
    int s = 0;
    while (i > 0) {
        s += bit[i];
        i -= i & -i;
    }
    return s;
}

void add(int i, int x)
{
    while (i <= n) {
        bit[i] += x;
        i += i & -i;
    }
}

int N, Q;
int com, x, y;

signed main()
{
#ifdef LOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif

    cin >> N >> Q;
    n = N + 1;
    REP(i,Q) {
        cin >> com >> x >> y;
        if (com == 0) {
            add(x, y);
        } else {
            cout << sum(y) - sum(x - 1) << endl;
        }
    }
}