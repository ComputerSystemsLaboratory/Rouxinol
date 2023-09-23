#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

using namespace std;

const long long base = (long long) 1e9 + 7;

long long bin_pow(long long n, long long p){
    if(p == 1) return n;

    if(p % 2 ==0){
        long long d = bin_pow(n, p/2);
        return d % base * d % base;
    } else {
        long long d = bin_pow(n, (p-1)/2);
        return d % base * d % base * n % base;
    }
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long m,n ;
    cin >> m >> n;

    cout << bin_pow(m, n) << "\n";
    return 0;
}