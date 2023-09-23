#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

bool isPrime[999999];

int main(void){
    int n;
    while(cin >> n) {
        rep(i, n+1) isPrime[i] = true;
        for(int i=2; i*i <= n; ++i) {
            if(isPrime[i]) {
                for(int j=2; i*j <= n; ++j) {
                    isPrime[i*j] = false;
                }
            }
        }
        int ans = 0;
        for(int i=2; i<=n; ++i) {
            if(isPrime[i]) ans++;
        }
        cout << ans << endl;
    }
}