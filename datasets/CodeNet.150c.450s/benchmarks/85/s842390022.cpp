#include <iostream>
using namespace std;
typedef long long ll;
const ll INF = (1LL << 58);
int n;
int S[110];
ll C[110][110];

int main(void) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int r, c;
        cin >> r >> c;
        S[i] = r; S[i + 1] = c;
    }

    n++;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) C[i][j] = INF;

    for (int i = 1; i <= n; i++) C[i][i] = 0;

    for (int j = 1; j <= n - 1; j++) {
        for (int i = 1; i <= n - j; i++) {
            for (int k = 1; k <= i + j; k++) {
                C[i][i + j]  = min(C[i][i + j], C[i][k - 1] + C[k][i + j] + S[i] * S[k] * S[i + j + 1]);
            }
        }
    }

    cout << C[1][n - 1] << endl;
    return 0;
}