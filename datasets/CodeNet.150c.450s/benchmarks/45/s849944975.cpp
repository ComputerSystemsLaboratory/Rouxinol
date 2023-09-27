// Numeric
#include<vector>

std::vector<bool> Eratosthenes(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; is_prime[i] && i * i <= n; ++i)
        for(int j = i << 1; j <= n; j += i)
            is_prime[j] = false;
    return is_prime;
}

int mod_power(long long int m, long long int n, int mod) {
    if(!n) return 1;
    if(n & 1) return mod_power(m, n - 1, mod) * m % mod;
    return mod_power(m * m % mod, n >> 1, mod) % mod;
}

////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << mod_power(m, n, 1000000007) << endl;
}