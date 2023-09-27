#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

void solve(int n) {
    int old = 0;
    int left = 0, right = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "lu") {
            left = 1;
            if (old == 0 && right == 1) {
                ans++;
                old = 1;
            }
        } else if (s == "ru") {
            right = 1;
            if (old == 0 && left == 1) {
                ans++;
                old = 1;
            }
        } else if (s == "ld") {
            left = 0;
            if (old == 1 && right == 0) {
                ans++;
                old = 0;
            }
        } else {
            right = 0;
            if (old == 1 && left == 0) {
                ans++;
                old = 0;
            }
        }
    }
    cout << ans << endl;
}

int main(void) {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        solve(n);
    }
    return 0;
}