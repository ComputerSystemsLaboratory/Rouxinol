#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    while (cin >> N >> M, N) {
        int D, P, res = 0;
        int Ps[11] = {0};
        for (int i=0; i<N; ++i) {
            cin >> D >> P;
            res += D * P;
            Ps[P] += D;
        }
        for (int i=10; i>=0; --i) {
            if (M <= Ps[i]) {
                res -= M * i;
                M = 0;
            } else {
                res -= Ps[i] * i;
                M -= Ps[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}