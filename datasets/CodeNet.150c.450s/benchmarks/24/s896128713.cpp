#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
using namespace std;

typedef pair<int, int> pii;

int main(void) {

    int N, M;
    while (cin >> N >> M, N||M) {
        vector<pii> PD(N);      // P, D
        for (int i = 0; i < N; i++) {
            cin >> PD[i].second >> PD[i].first;
        }

        sort(PD.begin(), PD.end(), greater<pii>());

        // for (int i = 0; i < N; i++) {
        //     cout << "# P[" << i << "]: " << PD[i].first << endl;
        //     cout << "# D[" << i << "]: " << PD[i].second << endl;
        // }

        int ans = 0;
        for (int i = 0; i < N; i++) {
            int P = PD[i].first;
            int D = PD[i].second;

            if (M > 0) {
                if (M >= D) {
                    M -= D;
                } else {
                    D -= M; M = 0;
                    ans += D*P;
                }
            } else {
                ans += D*P;
            }
        }

        cout << ans << endl;
    }

    return 0;
}