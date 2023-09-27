#line 1 "test/algebra/primefactors.test.cpp"
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include <bits/stdc++.h>
using namespace std;
using lint = long long;

#line 1 "test/algebra/../../library/algebra/primefactors.cpp"
// list up all prime factors, including how many times does it have the prime
template <typename T = int>
void primeFactors(T a, map<T, int> &facs) {
    double sqrtA = sqrt(a);
    for (int i = 2; i <= sqrtA + 1e-10; ++i) {
        while (a % i == 0) {
            facs[i]++;
            a /= i;
        }
    }
    if (a > sqrtA)
        facs[a]++;
    return;
}
#line 8 "test/algebra/primefactors.test.cpp"

int main() {
    lint n;
    cin >> n;
    map<lint, int> facs;
    primeFactors(n, facs);
    cout << n << ":";
    for (auto &p : facs) {
        for (int i = 0; i < p.second; ++i) {
            cout << " " << p.first;
        }
    }
    cout << endl;
    return 0;
}

