#include <iostream>
#include <cstring>

using namespace std;

int n;
int a[105];
long long memo[105][22];

long long solve(int i, int j) {
    long long result = 0;
    if (memo[i][j] != -1) {
        return memo[i][j];
    }
    if (i == 0) {
        result = j == a[0] ? 1 : 0;
    } else {
        if (j + a[i] <= 20) {
            result += solve(i - 1, j + a[i]);
        }
        if (j - a[i] >= 0) {
            result += solve(i - 1, j - a[i]);
        }
    }
    memo[i][j] = result;
    return result;
}

int main() {
    memset(memo, -1, sizeof(memo));
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << solve(n - 2, a[n - 1]) << endl;
}