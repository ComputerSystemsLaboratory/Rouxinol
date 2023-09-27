#include <bits/stdc++.h>
using namespace std;




























int main () {
    vector<long long> a(100001, 0);
    long long N;
    cin >> N;
    long long sum = 0;
    for (long long i = 0; i < N; i ++) {
        long long n;
        cin >> n;
        sum += n;
        a[n]++;
    }

    long long Q;
    cin >> Q;
    vector<long long> sum_history(Q);

    for (long long i = 0; i < Q; i++) {
        long long b, c;
        cin >> b >> c;
        sum += a[b] * (c - b);
        a[c] += a[b];
        a[b] = 0;
        sum_history[i] = sum;
    }

    for (long long i = 0; i < Q; i++) {
        cout << sum_history[i] << endl;
    }
}