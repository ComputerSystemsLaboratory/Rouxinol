#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#include <map>
#include<numeric>
using namespace std;
#define rep(i,n) for(int i=0; i<(n);i++)
typedef long long ll;


vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;

        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        res.push_back({a, ex});
    }

    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N;
    cin >> N;
    const auto &res = prime_factorize(N);
    cout << N << ":";
    for (auto p : res) {
        for (int i = 0; i < p.second; ++i) cout << " " << p.first;
    }
    cout << endl;
}

