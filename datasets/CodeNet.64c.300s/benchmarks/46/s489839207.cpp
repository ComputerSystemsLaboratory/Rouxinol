#include "bits/stdc++.h"

using namespace std;
const int MAX = 1000000; 
int main(void){
    
    bool prime[MAX];
    fill(prime, prime + MAX, true);
    prime[1] = false;
    for (int i = 4; i < MAX; i += 2) prime[i] = false;
    for (int i = 3; i < MAX; i += 2) {
        if (prime[i]) {
            for (int j = 2; i * j < MAX; ++j) {
                prime[i*j] = false;
            }
        }
    }
    int a, d, n;
    while (cin >> a >> d >> n && a && d && n) {
        int i = 0, res = 0;
        while (n > 0) {
            int num = a + i * d;
            if (prime[num]) {
                --n;
                res = num;
            }
            ++i;
        }
        cout << res << endl;
    }
    return EXIT_SUCCESS;
}