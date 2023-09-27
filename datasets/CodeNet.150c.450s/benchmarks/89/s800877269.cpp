//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> sieve_of_eratosthenes(int n)
{
    vector<int> primes(n);
    for (int i=2; i<n; ++i)
        primes[i] = i;
    for (int i=2; i*i<n; ++i)
        if (primes[i])
            for (int j=i*i; j<n; j+=i)
                primes[j] = 0;

    primes.erase(remove(primes.begin(), primes.end(), 0), primes.end());
    return primes;
}

signed main()
{
    int a, d, n;
    vector<int> primes = sieve_of_eratosthenes(1000001);
    while(cin>>a>>d>>n, a) {
        int cnt = 0;
        int ans = 0;
        for(int i=a;; i+=d) {
            if(*lower_bound(primes.begin(), primes.end(), i)==i) cnt++;
            if(cnt==n) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}