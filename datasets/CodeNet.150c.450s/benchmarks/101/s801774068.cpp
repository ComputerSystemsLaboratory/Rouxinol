#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> par;
void init(int m)
{
    N = m;
    par.resize(N);
    for (int i = 0; i < N; ++i) par[i] = i;
}
int find(int x) {
    return (par[x] == x) ? x : (par[x] = find(par[x]));
}
int isunion(int x, int y) {
    return find(x) == find(y);
}
int tounion(int x, int y)
{
    int p = find(x), q = find(y);
    if (p == q) return 0;
    par[q] = p;
    return 1;
}

int main() {
    int n, m, q;
    cin >> n >> m;
    init(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        tounion(a, b);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << (isunion(a, b) ? "yes\n" : "no\n");
    }
    return 0;
}