#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
int imos[86401];
int main() {
    while (cin >> n, n) {
        memset(imos, 0, sizeof(imos));
        int h1, m1, s1;
        int h2, m2, s2;
        rep(i, n) {
            scanf("%d:%d:%d", &h1, &m1, &s1);
            scanf("%d:%d:%d", &h2, &m2, &s2);
            imos[h1 * 3600 + m1 * 60 + s1]++;
            imos[h2 * 3600 + m2 * 60 + s2]--;
        }
        rep(i, 86401) if (i) imos[i] += imos[i - 1];
        cout << *max_element(imos, imos + 86401) << endl;
    }
    return 0;
}