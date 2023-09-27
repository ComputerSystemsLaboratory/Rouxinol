#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int N_MAX = 100;
int adj_matrix[N_MAX][N_MAX];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int id, k, v;
    FOR(i,0,n) {
        cin >> id;
        cin >> k;
        FOR(j,0,k) {
            cin >> v;
            adj_matrix[id-1][v-1] = 1;
        }
    }
    FOR(i,0,n) {
        FOR(j,0,n) {
            if (j > 0) { cout << " "; }
            cout << adj_matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}