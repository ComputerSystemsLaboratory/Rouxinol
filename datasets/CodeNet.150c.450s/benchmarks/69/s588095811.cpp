#include <iostream>

using namespace std;

int a[10];

bool dfs(int d, int left, int right) {
    if (d == 10) {
        return true;
    }
    if (a[d] > left) {
        return dfs(d + 1, a[d], right);
    }
    if (a[d] > right) {
        return dfs(d + 1, left, a[d]);
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        if (dfs(0, 0, 0) == true) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}