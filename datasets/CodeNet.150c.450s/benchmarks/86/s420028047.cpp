#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
typedef long long ll;
#define _ << " " <<
#define all(X) (X).begin(), (X).end()
#define Pii pair<int, int>
#define Pll pair<ll, ll>
#define Ti4 tuple<int, int, int, int>
#define Tlll tuple<ll, ll, ll>
#define PI 3.141592653589793

int main() {
    int n, m, p;
    while (cin >> n >> m >> p) {
        if (n == 0) return 0;
        int x[105], s = 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
            s += 100*x[i];
        }
        if (x[m - 1] == 0) cout << 0 << endl;
        else cout << s * (100 - p) / 100 / x[m - 1] << endl;
    }
}

