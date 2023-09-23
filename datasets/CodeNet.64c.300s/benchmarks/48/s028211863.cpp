
#include <iostream>
#include <cstdio>
using namespace std;
#define OVER_SIX_DIGITS 1000000

int prime[OVER_SIX_DIGITS];

void make_prime(void) {
    for(int r = 0; r < OVER_SIX_DIGITS; r++) prime[r] = 1;
    prime[0] = prime[1] = 0;
    
    for(int r = 2; r < OVER_SIX_DIGITS; r++) {
        if(prime[r]) {
            for(int c = 2 * r; c < OVER_SIX_DIGITS; c += r) prime[c] = 0;
        }
    }
    //累積和配列を作成
    for(int r = 1; r < OVER_SIX_DIGITS; r++) prime[r] += prime[r - 1];
}

int main(void) {
    int n;
    make_prime();
    while(cin >> n) {
        cout << prime[n] << endl;
    }
    return(0);
}