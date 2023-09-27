#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

long long inversion_count(vector<long long> &A) {
    auto N = (int) A.size();

    vector<pair<long long, int>> B(N);
    for (int i = 0; i < N; i++) B[i] = make_pair(A[i], i);
    sort(B.begin(), B.end());

    vector<int> idxs(N);
    for (int i = 0; i < N; i++) idxs[B[i].second] = i + 1;

    vector<int> BIT(N+1, 0);
    auto sum = [&](int i) {
        long long s = 0;
        while (i > 0) {
            s += BIT[i];
            i -= i & -i;
        }
        return s;
    };
    auto add_to = [&](int i, int x) {
        while (i <= N) {
            BIT[i] += x;
            i += i & -i;
        }
    };

    long long ret = 0;
    for (int j = 0; j < N; j++) {
        ret += j - sum(idxs[j]);
        add_to(idxs[j], 1);
    }

    return ret;
}

// Validation: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
signed main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << inversion_count(A) << endl;
    return 0;
}
