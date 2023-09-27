#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;

map<int, int> prime_factor(int n) {
    map<int, int> prime;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            prime[i]++;
            n /= i;
        }
    }
    if (n != 1) prime[n] = 1;
    return prime;
}

int main()
{
    int n;
    cin >> n;

    map<int, int> res = prime_factor(n);
    cout << n << ": ";
    for (auto itr = res.begin(); itr != res.end(); itr++) {
        if (++itr == res.end()) {
            --itr;
            rep(i, itr->second - 1) {
                cout << itr->first << " ";
            }
            cout << itr->first;
        }
        else {
            --itr;
            rep(i, itr->second) {
                cout << itr->first << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
