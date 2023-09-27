#include <iostream>
#include <climits>
using namespace std;

int N ;
int a[101][101];
int m[101][2];

int main() {
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> m[i][0] >> m[i][1];
    }

    for (int j = 1; j <= N; ++j) {
        a[j][j] = 0;
    }

    for (int k = 1; k < N; ++k) {
        for (int l = 1; l <= N- k ; ++l) {
            int j = l + k;
            int mn = INT_MAX;
            for (int p = l; p <= j-1 ; ++p) {
                mn = min(mn, a[l][p] + a[p+1][j] + m[l][0] * m[p][1] * m[j][1]);
            }
            a[l][j] = mn;
        }
    }
    cout << a[1][N] << endl;

    return 0;
}

