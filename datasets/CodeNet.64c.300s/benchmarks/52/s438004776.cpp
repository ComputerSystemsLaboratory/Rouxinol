#include <iostream>
using namespace std;

int dfs(int n, int s, int num) {
    if (s == 0 && n == 0) return 1;
    if (num >= 10 || s < 0 || n < 0) return 0;

    int ret = 0;
    // numを選ぶ
    ret += dfs(n-1, s-num, num+1);
    // numを選ばない
    ret += dfs(n, s, num+1);
    return ret;
}

int main(void) {
    int n, s;
    while (1) {
        cin >> n >> s;
        if (n == 0 && s == 0) break;

        int ret = dfs(n, s, 0);
        cout << ret << endl;
    }

    return 0;
}