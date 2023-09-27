#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <cassert>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
typedef long long int ll;
const ll INF = 1000000000000000000;
const double PI = acos(-1);
const ll mod = 1000000007;

int main()
{
    int d;
    int c[26];
    int s[365][26];
    int t[365];
    cin >> d;
    rep(i, 26) cin >> c[i];
    rep(i, d) rep(j, 26) cin >> s[i][j];
    rep(i, d) cin >> t[i];

    int last[26] = {};
    int v = 0;
    rep(i, d) {
        v += s[i][t[i]-1];
        last[t[i]-1] = i + 1;
        rep(j, 26) {
            v -= c[j] * (i + 1 - last[j]);
        }
        cout << v << endl;
    }
    return 0;
}