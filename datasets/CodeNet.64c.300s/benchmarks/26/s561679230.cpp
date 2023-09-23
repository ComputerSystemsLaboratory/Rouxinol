#include <iostream>
#include <cmath>
using namespace std;
long long mod = 1000000007;
long long power(long long m, long long n){
    if(n==0)
        return 1;
    long long temp;
    if(n%2 == 0){
		temp = power(m*m%mod, n/2)%mod;
        return temp;
    }else{
        return power(m*m%mod, n/2)*m%mod;  
    }
}
 
int main() {
    long long m,n;
    cin >> m >> n;
    cout << power(m,n)%mod << endl;
    return 0;
}
