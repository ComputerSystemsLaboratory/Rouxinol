#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

bool isprime(int N) {
    if (N == 2) return true;
    if (N%2 == 0) return false;
    for(int i = 3; i <= sqrt(N); i+=2) {
        if (!(N%i)) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int c = 0;
    REP(i,N) {
        int k;
        cin >> k;
        if (isprime(k)) c++;
    }
    cout << c << endl;
}