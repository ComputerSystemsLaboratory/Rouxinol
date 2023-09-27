#include "bits/stdc++.h"

using namespace std;
#define rep(i, j) for(int i = 0; i < (j); i++)

int main() {
    while(true) {
        int N, M, P; cin >> N >> M >> P;
        if(N == 0) break;
        vector<int> X(N); rep(i, N) cin >> X[i];
        double sum = 0;
        rep(i, N) sum += X[i] * 100;
        double sub = sum * P / 100.0;
        sum -= sub;
        cout << (X[M - 1] == 0 ? 0 : int(sum / X[M - 1])) << endl;
    }
}