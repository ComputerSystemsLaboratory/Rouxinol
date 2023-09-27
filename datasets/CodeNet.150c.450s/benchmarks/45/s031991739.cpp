#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
using u64 = ::std::int_least64_t;
//using u64 = long long;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

u64 modPow(u64 n, u64 k, u64 mod)
{
    if (k == 0) return 1LL % mod;
    u64 r = modPow(n, k >> 1, mod);
    r = r * r % mod;
    if (k & 1) r = r * n % mod;
    return r;
}


int main(int argc, char *argv[])
{
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    u64 n, k;
    cin >> n >> k;
    
    cout << modPow(n, k, 1000000007) << endl;
    
}

