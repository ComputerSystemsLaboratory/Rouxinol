#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M, 0 < N + M) {
        int res = 0;
        vector<int> h(N+1,0);
        int ht = 0;
        for (int i=1; i<=N; ++i) {
            cin >> ht;
            h[i] = h[i-1] + ht;
        }

        vector<int> w(M+1,0);
        int wt = 0;
        for (int i=1; i<=M; ++i) {
            cin >> wt;
            w[i] = w[i-1] + wt;
        }

        vector<int> tate;
        for (int i=0; i<N+1; ++i) {
            for (int j=i+1; j<N+1; ++j) {
                tate.push_back(abs(h[i] - h[j]));
            }
        }

        vector<int> yoko;
        for (int i=0; i<=M; ++i) {
            for (int j=i+1; j<=M; ++j) {
                yoko.push_back(abs(w[i] - w[j]));
            }
        }
        sort(yoko.begin(), yoko.end());

        for (int i=0; i<(int)tate.size(); ++i) {
            res += upper_bound(yoko.begin(), yoko.end(), tate[i]) - lower_bound(yoko.begin(), yoko.end(), tate[i]);
        }
        cout << res << endl;
    }
    return 0;
}