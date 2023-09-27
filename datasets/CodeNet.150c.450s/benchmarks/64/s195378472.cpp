#include <iostream>

using namespace std;
int n;
int a[30];
int nn;
int q[300];
bool dp[30][3000];
bool al[30][3000];

void init1() {
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 3000; j++) {
            al[i][j] = false;
        }
    }
}

bool solve(int i, int m) {
    if (al[i][m]) {
        return dp[i][m];
    }
    if (m == 0) {
        al[i][m] = true;
        dp[i][m] = true;
    } else if (i >= n) {
        al[i][m] = true;
        dp[i][m] = false;
    } else if (solve(i + 1, m - a[i])) {
        al[i][m] = true;
        dp[i][m] = true;
    } else if (solve(i+1,m)) {
        al[i][m] = true;
        dp[i][m] = true;
    } else {
        al[i][m] = true;
        dp[i][m] = false;
    }
    return dp[i][m];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> nn;
    for (int i = 0; i < nn; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < nn; i++) {
        init1();
        bool t = solve(0, q[i]);
        if (t) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}