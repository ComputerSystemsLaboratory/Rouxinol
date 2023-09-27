#include <iostream>

using namespace std;

int n, s, cnt;

void dfs(int i, int sum, int depth) {
    if (sum == s && depth == n) {
        cnt++;
        return;
    }

    if (i > 9 || depth > n) return;

    dfs(i+1, sum, depth);
    dfs(i+1, sum + i, depth + 1);
}

int main() {
    while (cin >> n >> s) {
        if (n == 0 && s == 0) break;
        cnt = 0;
        dfs(0, 0, 0);
        cout << cnt << endl;
    }
    return 0;
}