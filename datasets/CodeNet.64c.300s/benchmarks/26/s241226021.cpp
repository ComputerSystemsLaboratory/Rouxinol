#include <iostream>
using namespace std;

long long int M = 1000000007;

long long int power(long long int m , long long int n){
    if(n == 1)
        return m;
    else if(n % 2 == 0)
        return power((m * m) % M, (n / 2));
    else
        return (power((m * m) % M, (n / 2)) * m % M);
}

int main(void){
    long long int m, n;
    cin >> m >> n;
    cout << (power(m, n) % M) << endl;
}

