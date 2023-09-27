#include <bits/stdc++.h>

using namespace std;

namespace {

    typedef double real;
    typedef long long ll;

    template<class T> ostream& operator<<(ostream& os, const vector<T>& vs) {
        if (vs.empty()) return os << "[]";
        os << "[" << vs[0];
        for (int i = 1; i < vs.size(); i++) os << " " << vs[i];
        return os << "]";
    }
    template<class T> istream& operator>>(istream& is, vector<T>& vs) {
        for (auto it = vs.begin(); it != vs.end(); it++) is >> *it;
        return is;
    }

    int M, n, N;
    vector<int> P;
    bool input() {
        cin >> M >> n >> N;
        if (M == 0 && n == 0 && N == 0) return false;
        P.clear(); P.resize(M); cin >> P;
        return true;
    }

    void solve() {
        int ans = -1;
        int g = 0;
        for (int i = n; i <= N; i++) {
            int c = P[i - 1] - P[i];
            if (c >= g) {
                ans = i;
                g = c;
            }
        }
        cout << ans << endl;
    }
}

int main() {
    while (input()) solve();
    return 0;
}