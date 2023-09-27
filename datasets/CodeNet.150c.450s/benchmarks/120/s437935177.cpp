#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int get(int y, int x, vector<vector<int> > &A, vector<int> &flip) {
    return (A.at(y).at(x) + flip.at(y)) % 2;
}

int calc(vector<vector<int> > &A, vector<int> &flip) {
    int R = A.size();
    int C = A.at(0).size();
    int ans = 0;
    for (int x = 0; x < C; ++x) {
        int res = 0;
        for (int y = 0; y < R; ++y) {
            res += get(y, x, A, flip);
        }
        ans += max(res, R - res);
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (true) {
        int R, C;
        cin >> R >> C;
        if (R == 0 && C == 0) break;
        vector<vector<int> > A(R, vector<int>(C));
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                cin >> A.at(i).at(j);
            }
        }
        int ans = 0;
        for (int tmp = 0; tmp < (1 << R); ++tmp) {
            bitset<10> s(tmp);
            vector<int> flip(R);
            for (int i = 0; i < R; ++i) {
                flip.at(i) = (int)(s.test(i));
            }
            ans = max(ans, calc(A, flip));
        }
        cout << ans << endl;
    }

    return 0;
}
