#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> A;

bool solve(int i, int m) {
    if (m == 0) {
        return true;
    }
    if (i >= n) {
        return false;
    }
    bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        A.push_back(d);
    }
    int q;
    scanf("%d", &q);
    int m;
    for (int i = 0; i < q; i++) {
        scanf("%d", &m);
        if (solve(0, m)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}