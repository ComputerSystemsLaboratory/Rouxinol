#include <iostream>
#include <stdio.h>

using namespace std;
const int max_d = 30;

int sieve(int n) {
    int res = 0;
    bool prime[n + 1];
    for(int i = 0; i <= n; i++) {
        prime[i] = true;
    }
    for(int i = 2; i <= n ; i++) {
        if(prime[i]) {
            res++;
            for(int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    return res;
}

int main() {
    int n;
    int dc = 0;
    while(cin >> n) {
        dc++;
        if(dc > max_d) break;
        cout << sieve(n) << endl;
    }
    return 0;
}