/* prime_factorization.cpp
    素因数分解

    verified: AOJ NTL_1_A
        http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A&lang=ja
*/
#include <bits/stdc++.h>
using namespace std;

/*  prime_factor(n)
    入力：整数 n
    出力：nの素因数分解
    計算量：O(√n)前後
*/
template <typename T>
vector<pair<T, T>> prime_factor(T n) {
    vector<pair<T, T>> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret.push_back(make_pair(i, tmp));
    }
    if (n != 1) ret.push_back(make_pair(n, 1));
    return ret;
}

int main() {
    long long N;
    cin >> N;
    vector<pair<long long, long long>> prime_fac = prime_factor(N);

    cout << N << ":";
    for (auto p : prime_fac) {
        for (int i = 0; i < p.second; i++) {
            cout << " " << p.first;
        }
    }
    cout << endl;
    return 0;
}

