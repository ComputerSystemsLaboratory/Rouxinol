#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool input(vector<int>& row, vector<int>& col, int& N, int& M) {
    scanf("%d %d ", &N, &M);

    for (int i = 0; i < N; i++) {
        int t;
        scanf("%d ", &t);
        row.push_back(t);
    }
    for (int i = 0; i < M; i++) {
        int t;
        scanf("%d ", &t);
        col.push_back(t);
    }
    return true;
}

void create2(vector<int> a, vector<int>& res) {
    for (int i = 0; i < a.size(); i++) {
        int t = 0;
        for (int j = i; j < a.size(); j++) {
            t += a[j];
            res.push_back(t);
        }
    }
    sort(res.begin(), res.end());
}

void solve(vector<int> r, vector<int> c) {
    int res = 0;
    for (int i = 0; i < r.size(); i++) {
        res += distance(
            lower_bound(c.begin(), c.end(), r[i]),
            upper_bound(c.begin(), c.end(), r[i]));
    }
    printf("%d\n", res);
}

int main() {
    int N, M;
    while (true) {
        vector<int> row, col;
        input(row, col, N, M);
        if (N == 0 && M == 0) {return 0;}
        vector<int> row2;
        vector<int> col2;

        create2(row, row2);
        create2(col, col2);

        solve(row2, col2);
    }
}