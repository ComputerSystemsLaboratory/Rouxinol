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
    while (cin >> N >> M, N) {
        vector<pair<int,int> > v(N);
        int D, P, res = 0;
        for (int i=0; i<N; ++i) {
            cin >> D >> P;
            res += D * P;
            v[i] = make_pair(P, D);
        }
        sort(v.begin(), v.end(), greater<pair<int,int> >());
        for (int i=0; i<N; ++i) {
            if (v[i].second < M) {
                res -= v[i].first * v[i].second;
                M -= v[i].second;
            } else {
                res -= v[i].first * M;
                M = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}