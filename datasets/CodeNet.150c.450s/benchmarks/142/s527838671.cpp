#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>
#include <queue>
#include <cassert>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define rALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int iINF = 1001001001;
const long long llINF = 1LL << 60;
int main()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for (int i = k; i < n; ++i) {
        if (a[i - k] < a[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}