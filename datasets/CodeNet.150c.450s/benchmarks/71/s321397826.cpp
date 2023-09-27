#include <iostream>
using namespace std;

int dfs(int n, int cnt) {
    if (n == 0) return 1;
    if (cnt == 4) return 0;

    int ret = 0;
    for (int i = 0; i < 10; i++) {
        ret += dfs(n-i, cnt+1);
    }

    return ret;
}

int main(void) {
    int n;
    while (cin >> n) {
        int ret = dfs(n, 0);
        cout << ret << endl;
    }

    return 0;
}