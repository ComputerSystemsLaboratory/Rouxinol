#include <iostream>
using namespace std;

const int mod = 1000000007;

long long pow_mod(long long m, long long n){
    // ?????°m?????????mod?????????
    if(n == 0){
        return 1;
    } else if(n%2 == 0){
        return pow_mod(m * m % mod, n/2);
    } else {
        return pow_mod(m * m % mod, (n-1)/2) * m % mod;
    }
}

int main(){
    long long m, n;
    cin >> m >> n;
    cout << pow_mod(m, n) << endl;
}