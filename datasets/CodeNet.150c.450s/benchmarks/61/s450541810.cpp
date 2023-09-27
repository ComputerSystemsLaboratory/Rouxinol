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
    int n, a, b, c, x; 
    
    while (cin >> n >> a >> b >> c >> x) {
        if (n == 0) return 0;
        int ans = 0, y[n];
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        for (int i = 0; i < n; i++) {
            while (y[i] != x && ans <= 10001) {
                x = (a*x + b) % c;
                ans++;
            }
            if (ans > 10001) break;
            x = (a*x + b) % c;
            ans++;
        }
        ans--;
        cout << (ans > 10000 ? -1 : ans) << endl;
    }
}

