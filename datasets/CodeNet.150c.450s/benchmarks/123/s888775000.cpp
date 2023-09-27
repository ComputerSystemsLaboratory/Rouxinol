#include <bits/stdc++.h>
using u32 = unsigned int;
using u64 = unsigned long long;
using u128 = __uint128_t;

template<class Int, class ModMul>
bool is_prime_impl(const Int &n, const Int *witness, ModMul modmul) {
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
    const Int m = n - 1, d = m / (m & -m);
    auto modpow = [&](Int a, Int b) {
        Int res = 1;
        for (; b; b /= 2) {
            if (b & 1) res = modmul(res, a);
            a = modmul(a, a);
        }
        return res;
    };
    auto suspect = [&](Int a, Int t) {
        a = modpow(a, t);
        while (t != n - 1 && a != 1 && a != n - 1) {
            a = modmul(a, a);
            t = modmul(t, 2);
        }
        return a == n - 1 || t % 2 == 1;
    };
    for (const Int *w = witness; *w < n && *w; w++) {
        if (!suspect(*w, d)) return false;
    }
    return true;
}

bool is_prime(const u128 &n){
    if(n < 1ULL << 32){
        // n < 2^32
        constexpr u64 witness[] = {2, 7, 61, 0};
        auto modmul = [&](u64 a, u64 b) {
            return a * b % n;
        };
        return is_prime_impl<u64>(n, witness, modmul);
    } else {
        // n < 2^64
        constexpr u128 witness[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022, 0};
        auto modmul = [&](u128 a, u128 b) {
            return a * b % n;
        };
        auto slow_modmul = [&](u64 a, u64 b){
            u64 res = 0;
            for (; b; b /= 2) {
                if(b&1) res = (res+a)%n;
                a = (a+a)%n;
            }
            return res;
        };
        return is_prime_impl<u128>(n, witness, modmul);
    }
}

using namespace std;
#define rep(i,b) for(int i = 0; i < (int)(n); i++)
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n){
        ll x;
        cin >> x;
        ans += is_prime(x);
    }
    cout << ans << endl;
}