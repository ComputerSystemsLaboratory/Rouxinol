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
    int n, m;
    cin >> n;
    string u[n];
    for (int i = 0; i < n; i++) cin >> u[i];
    
    bool key = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string t;
        cin >> t;
        string pf = "Unknown";
        for (int j = 0; j < n; j++) {
            if (t == u[j]) {
                if (key) pf = "Closed by";
                else pf = "Opened by";
                key ^= 1;
                break;
            }
        }
        cout << pf _ t << endl;
    }
}

