#include <iostream>

using namespace std;

int dfs(int o, int n, int s) {
    if (n == 0 && s == 0) return 1;

    int ret = 0;
    for (int i = o; i <= 9; i++) {
        ret += dfs(i + 1, n - 1, s - i);
    }
    return ret;
}

int main() {
    double n, s;
    while (cin >> n >> s) {
        if (n == 0 && s == 0) break;
        cout << dfs(0, n, s) << endl;
    }

    return 0;
}