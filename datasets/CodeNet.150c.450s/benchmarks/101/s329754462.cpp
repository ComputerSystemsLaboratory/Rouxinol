#include <iostream>
#include <vector>
#include <stack>

using ll = long long;
using namespace std;

/* initialize */
vector<int> A[100000];
int c[100000];
/* main */
void dfs(int r, int d){
    stack<int> S;
    S.push(r);
    c[r] = d;
    while (!S.empty()){
        int u = S.top(); S.pop();
        for (int v : A[u]) {
            if ( c[v] == -1){
                c[v] = d;
                S.push(v);
            }
        }
    }
}
int main() {
    int n, m, k, l;
    cin >> n;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &k, &l);
        A[k].push_back(l);
        A[l].push_back(k);
    }
    int id = 1;
    for (int i = 0; i < n; ++i) {
        c[i] = -1;
    }
    for (int j = 0; j < n; ++j) {
        if (c[j] == -1) dfs(j,id++);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> k >> l;
        if(c[k] == c[l]) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
