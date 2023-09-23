#include <iostream>
using namespace std;

long long mod_pow(long long x, long long n, long long mod)
{
    long long res = 1;
    while(n>0)
    {
        if(n&1)   res = res * x % mod;
        x = x*x%mod;
        n >>= 1;
    }
    return res;
}
int main()
{
    long long m, n;
    cin >> m >> n;
    cout << mod_pow(m,n,1000000007) << endl;
    return 0;
}