#include <iostream>
using namespace std;

int res;

void dfs(int n, int index, int s) {
    if (n == 0 && s == 0) {
        res++;
        return;
    } else if (n == 0 || s < 0 || s < index || 9 < index) {
        return;
    }
    dfs(n - 1, index + 1, s - index);
    dfs(n, index + 1, s);
    return;
}

int main() {
    while (true) {
        int n, s;
        cin >> n >> s;
        if ((n | s) == 0) {
            break;
        }
        res = 0;
        dfs(n, 0, s);
        cout << res << endl;
    }
}