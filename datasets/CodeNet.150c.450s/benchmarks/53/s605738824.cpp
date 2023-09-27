#include <iostream>
#include <vector>
using namespace std;

vector<pair<long long, long long> > prime_fact(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; a++) {
        if (N % a != 0) continue;
        long long ex = 0;
         
        while (N % a == 0) {
            ex++;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long n; cin >> n;
    vector<pair<long long, long long> > res = prime_fact(n);
    cout << n << ":";
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].second; j++) {
            cout << " " << res[i].first;
        }
    }
    cout << endl;

}
