#include <iostream>

using namespace std;

const long long mod = 1e9 + 7;

long long mod_pow(long long m, long long n){
    
    if (n == 1) return m;
    
    if (n % 2 == 1) return (m * mod_pow(m, n-1)) % mod;
    
    long long t = mod_pow(m, n/2);
    return (t*t)%mod;
}


int main(){
    
    long long m, n;
    cin >> m >> n;
    
    cout << mod_pow(m, n) << endl;
    return 0;
}
