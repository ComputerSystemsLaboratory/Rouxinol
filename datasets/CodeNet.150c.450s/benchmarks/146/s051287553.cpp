#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define range(i, a, b) for (int i = a; i < b; ++i)
#define rep(i, n) range(i, 0, n)
const ll INF = 1e10;
#define pb push_back
const double eps = 1e-10;

int main()
{
    int n;
    cin >> n;
    rep(i, n)
    {
        vector<double> x(4), y(4);
        rep(j, 4) cin >> x[j] >> y[j];
        double a = (x[3] - x[2]) * (y[1] - y[0]) - (x[1] - x[0]) * (y[3] - y[2]);
        if (abs(a) > eps) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

