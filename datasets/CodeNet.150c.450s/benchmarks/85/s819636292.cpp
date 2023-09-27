#include <iostream>
using namespace std;

static const int NMAX = 100;
static const int RMAX = 100;
static const int CMAX = 100;
static const int INF = (1 << 29);

int main() {
    int n; cin >> n;
    int M[NMAX+1][NMAX+1];
    int r[RMAX+1];
    int c[CMAX+1];
    int min_cost;

    for (int i = 1; i < n+1; ++i) cin >> r[i] >> c[i];

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n+1-i; ++j) {
            for (int k = 1+i; k < n+1; ++k) {
                if (j==k) {
                    M[j][k] = 0;
                    continue;
                }

                min_cost = INF;
                for (int l = j; l < k; ++l) {
                    min_cost = min(min_cost, M[j][l] + M[l+1][k] + (r[j]*c[l]*c[k]));
                }
                M[j][k] = min_cost;
            }
        }
    } 

    // for (int i = 1; i < n+1; ++i) {
    //     for(int j = 1; j < n+1; ++j) {
    //         cout << M[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << M[1][n] << endl;


    return 0;
}
