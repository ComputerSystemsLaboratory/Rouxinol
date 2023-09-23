#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX_N = 10;
int a[MAX_N];

bool dfs(int idx, int end1, int end2) {
    if (idx == MAX_N) return true;
    if (a[idx] < end1 && a[idx] < end2) return false;
    if (a[idx] > end1 && a[idx] > end2) return dfs(idx+1, a[idx], end2) || dfs(idx+1, end1, a[idx]);
    if (a[idx] > end1) return dfs(idx+1, a[idx], end2);
    if (a[idx] > end2) return dfs(idx+1, end1, a[idx]);
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < MAX_N; i++)
            cin >> a[i];
        bool flag = dfs(0, 0, 0);
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
