#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

// O(√n) で素数判定
bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n != 1;
}

// 約数のvectorを返す
vector<int> divisor(int n) {
    vector<int> ret;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i != n / i) ret.push_back(n / i);
        }
    }
    return ret;
}

// 素因数分解
map<int, int> prime_factor(int n) {
    map<int, int> ret;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1) ret[n] = 1;
    return ret;
}


// verified
//   https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
void AOJ_NTL_1_A() {
    int n;
    cin >> n;
    cout << n << ':';
    auto mp = prime_factor(n);
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        for (int i = 0; i < itr->second; i++) {
            cout << ' ' << itr->first;
        }
    }
    cout << endl;
}

int main() {
    AOJ_NTL_1_A();
    return 0;
}
