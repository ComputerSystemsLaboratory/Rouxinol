#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
using u64 = ::std::int_least64_t;
//using u64 = double;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

const int MAXN = 10000000;
int primes[MAXN], cnt;
map<int, int> factors;
void sieve(int *primes, int n, int &cnt)
{
    cnt = 0;
    memset(primes, 1, n * sizeof(int));

    for (int i = 2; i < n; i++)
    {
        if (primes[i]) primes[cnt++] = i;
        for (int j = 0; j < cnt && i * primes[j] < n; j++)
        {
            primes[i * primes[j]] = 0;
            if (i % primes[j] == 0) break;
        }
    }
}

void findDivisor(int n)
{
    for (int i = 0; i < cnt; i++)
    {
        if (primes[i] * primes[i] > n) break;
        while (n % primes[i] == 0)
        {
            n /= primes[i];
            factors[primes[i]]++;
        }
    }

    if (n > 1) factors[n]++;
    
    for(auto f : factors){
        for (int i = 0; i < f.second; i++) {
            cout << " " << f.first;
        }
    }

}


int main(int argc, char *argv[])
{
    
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    sieve(primes, MAXN - 1, cnt);
    cout << n << ":";
    findDivisor(n);
    cout << endl;
    
    return 0;
}

