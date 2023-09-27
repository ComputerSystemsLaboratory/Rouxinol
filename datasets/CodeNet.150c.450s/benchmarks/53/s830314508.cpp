#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define P pair<int, int>
#define F first
#define S second
#define prime 1000000007
#define INF 40000000000000000
int dx8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy8[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dx4[4] = {-1, 0, 1, 0};
int dy4[4] = {0, -1, 0, 1};
signed main(void) {
    int N;
    cin >> N;
    cout << N << ':' << ' ';
    vector<P> Primes;
    for(int i = 2; i <= sqrt(N); i++) {
        if(N % i == 0) {
            int count = 0;
            while(N % i == 0) {
                N /= i;
                count++;
            }
            Primes.push_back(make_pair(count, i));
        }
    }
    if(N > 1) Primes.push_back(make_pair(1, N));
    rep(i, Primes.size()) {
        P p = Primes[i];
        if(i < Primes.size() - 1) {
            rep(j, p.F) cout << p.S << ' ';
        } else {
            rep(j, p.F - 1) cout << p.S << ' ';
            cout << p.S << endl;
        }
    }
}

