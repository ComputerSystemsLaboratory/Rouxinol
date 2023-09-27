#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > a(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            a[u][v] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << (j != n ? ' ' : '\n');
        }
    }
    return 0;
}