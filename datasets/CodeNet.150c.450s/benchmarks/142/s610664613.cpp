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
#include <random>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
typedef long long int ll;
const ll INF = 10000000000;
const double PI = acos(-1);
const ll mod = 998244353;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }

    rep(i, n - k) {
        if (a[i] < a[i + k]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
