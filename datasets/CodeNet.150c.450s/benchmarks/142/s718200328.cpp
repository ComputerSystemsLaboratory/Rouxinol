#include <bits/stdc++.h>
//https://qiita.com/ysuzuki19/items/d89057d65284ba1a16ac
#define debug(var)                  \
    do {                            \
        std::cout << #var << " : "; \
        view(var);                  \
    } while (0)
template <typename T>
void view(T e) { std::cout << e << std::endl; }

template <typename T>
void view(const std::vector<T>& v) {
    for (const auto& e : v) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void view(const std::vector<std::vector<T>>& vv) {
    for (const auto& v : vv) {
        view(v);
    }
}

using namespace std;
//yosupo
template <class T>
using V = vector<T>;
template <class T>
using VV = V<V<T>>;

// (i-1)回目での評点P_(i-1) = Π_{n = i-1 - K + 1}^{i-1}A_n
// (i)回目での評点P_i = Π_{n = i - K + 1}^{i}A_n
// P_i = P_(i-1) * A_i / A_{i-K}
// P_i > P_(i-1)となるためには、
// P_ (i-1) * A_i / A_{i-K} > P_{i-1}
// A_i > A_{i-K} である必要がある

int main() {
    int N, K;
    cin >> N >> K;
    V<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = K; i < N; ++i) {
        if (A[i - K] < A[i])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}