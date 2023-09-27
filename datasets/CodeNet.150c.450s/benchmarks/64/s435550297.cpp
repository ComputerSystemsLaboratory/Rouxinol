// DP
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int n, q;
vector<int> A;
vector<vector<int> > dp;

bool solve(int i, int m) {
    if (m == 0) return true;
    else if (i >= n) return false;
    else if(solve(i+1, m)) return true;
    else if (solve(i+1, m - A[i])) return true;
    else return false ;
}

int main() {
    cin >> n;
    A.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    cin >> q;
    for (int j = 0; j < q; ++j) {
        int m;
        cin >> m;
        dp.resize(n);
        for (int i = 0; i < n; ++i) {
            dp[i].resize(m);
        }
        bool ans = solve(0, m);
        if(ans) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}

