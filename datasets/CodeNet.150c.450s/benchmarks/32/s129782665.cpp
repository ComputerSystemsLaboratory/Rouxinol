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
    int m, n1, n2; 
    
    while (cin >> m >> n1 >> n2) {
        if (m == 0) return 0;
        int p[m], mx = 0, mx_idx = -1;
        for (int i = 0; i < m; i++) cin >> p[i];
        for (int i = n1; i <= n2; i++) {
            if (mx <= p[i - 1] - p[i]) {
                mx = p[i - 1] - p[i];
                mx_idx = i;
            }
        }
        cout << mx_idx << endl;
    }
}

