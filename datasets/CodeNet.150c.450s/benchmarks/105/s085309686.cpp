#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pli = pair<ll, int>;
using pil = pair<int, ll>;
using uint = unsigned int;
template <typename T>
using Graph = vector<vector<T>>;
const int MOD = 1e9 + 7;
const ld PI = acosl(-1);

int mdigit(ll val) {
    int l = 0, r = 61;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        ll bit = (1LL << r) - (1LL << mid);
        (val & bit ? l : r) = mid;
    }
    return l;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int a = 0; a < T; ++a) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        string S;
        cin >> S;

        bool isok = true;
        vector<ll> v(61);
        for (int i = N - 1; i >= 0; --i) {
            int tmp;
            while (A[i] && v[tmp = mdigit(A[i])])
                A[i] ^= v[tmp];
            if (A[i]) {
                if (S[i] == '0')
                    v[tmp] = A[i];
                else {
                    isok = false;
                    break;
                }
            }
        }

        cout << !isok << '\n';
    }

    return 0;
}
