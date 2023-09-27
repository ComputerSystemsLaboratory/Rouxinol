//https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/1/DPL_1_B

#include <bits/stdc++.h>

using namespace std;


int knapsackW(vector<int> p, vector<int> w, int c) {
    int n = w.size();
    vector<int> F(c + 1);
    for (int i = 0; i < n; ++i)
        for (int a = c; a >= w[i]; --a)
            F[a] = max(F[a], F[a - w[i]] + p[i]);
    return F[c];
}


int main() {
    int n, W;
    cin >> n >> W;

    vector<int> value(n), weight(n);
    for (int i = 0; i < n; ++i) {
        cin >> value[i] >> weight[i];
    }

    cout << knapsackW(value, weight, W) << endl;
    return 0;
}

/*
 * spaghetti-sourceのコードを利用。
 * 
 */
