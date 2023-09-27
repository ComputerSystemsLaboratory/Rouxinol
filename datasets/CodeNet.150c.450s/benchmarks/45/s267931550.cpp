#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
ll power(const ll p, const ll n)
{
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 1) {
        return (power(p, n - 1) * p) % MOD;
    } else {
        const ll pp = power(p, n / 2);
        return (pp * pp) % MOD;
    }
}
int main()
{
    ll M, N;
    cin >> M >> N;
    cout << power(M, N) << endl;
    return 0;
}

