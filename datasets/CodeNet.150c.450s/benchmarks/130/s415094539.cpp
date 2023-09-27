// @author: arch_

#include <bits/stdc++.h>
using namespace std;

constexpr int Nmax = 100;
constexpr int Mmax = 100;
array<array<int, Mmax>, Nmax> a;
array<int, Mmax> b;
array<int, Nmax> c;

int main(void) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) c[i] += a[i][j] * b[j];
    for (int i = 0; i < n; i++) cout << c[i] << "\n";
    return 0;
}