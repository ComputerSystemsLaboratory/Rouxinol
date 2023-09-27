#include <iostream>

using namespace std;

int cnt, n, s;

void dfs(int num, int d, int sum) {
    if (d == n) {
        if (sum == s) {
            cnt++;
        }
        return;
    }
    if (num == 10) {
        return;
    }
    
    dfs(num + 1, d, sum);
    dfs(num + 1, d + 1, sum + num);
}

int main() {
    while (1) {
        cin >> n >> s;
        if (n == 0) {
            break;
        }
        cnt = 0;
        dfs(0, 0, 0);
        cout << cnt << endl;
    }
    return 0;
}