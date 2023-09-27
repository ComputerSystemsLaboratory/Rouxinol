#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i != 0) {
            continue; 
        }
        long long ex = 0; // 指数
        // 割れるだけ割る
        while (N % i == 0) {
            ++ex;
            N /= i;
        }
        // 結果を push
        res.push_back({i, ex});
    }

    // 残った数はそのまま push
    if (N != 1) {
        res.push_back({N, 1});
    }

    return res;
}

int main() {
    long long N;
    cin >> N;
    vector<pair<long long, long long> > res = prime_factorize(N);
    cout << N << ":";
    for (pair<long long, long long> p : res) {
        for (int i = 0; i < p.second; ++i) {
            cout << " " << p.first;
        }
    }
    cout << endl;

    return 0;
}


