// c lib
#include <cstdio>
#include <cstdlib>
#include <cmath>

// container
#include <vector>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <array>

// Convenience
#include <algorithm>
#include <functional>

// IO
#include <iostream>

using namespace std;
constexpr long long NMAX = 200000;
constexpr long long AMAX = 1e9;

long long result = 0;

long long L[NMAX];
long long R[NMAX];
void merge(long long* A, long long s, long long m, long long e) {
    auto lp = L;
    auto rp = R;
    for (auto i = s; i < m; i++) {
        L[i - s] = A[i];
    }
    L[m - s] = AMAX + 1ll;
    for (auto i = m; i < e; i++) {
        R[i - m] = A[i];
    }
    R[e - m] = AMAX + 1ll;

    auto ap = A + s;
    while (ap != A + e) {
        if (*lp > *rp) {
            *ap = *rp;
            ap++;
            result += (L + (m - s)) - lp;
            rp++;
        } else {
            *ap = *lp;
            ap++;
            lp++;
        }
    }
}

void merge_sort(long long* A, long long s, long long e) {
    auto m = (s + e) / 2ll;
    if (m == s) {
        return;
    }
    merge_sort(A, s, m);
    merge_sort(A, m, e);
    merge(A, s, m, e);
}

int main() {
    auto n = 0ll;
    cin >> n;
    
    auto A = new long long [n];
    for (auto i = 0ll; i < n; i++) {
        cin >> A[i];
    }

    merge_sort(A, 0, n);

    cout << result << endl;
}
