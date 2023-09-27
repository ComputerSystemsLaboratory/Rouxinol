#include <cstdio>
#include <cstdint>
#include <map>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cstddef>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <tuple>
#include <utility>
#include <math.h>
#include <stack>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
*/

const long long mod = 1e9+7;

void chmod(long long &M){
    if(M >= mod) M %= mod;
    else if(M < 0){
        M += (abs(M)/mod + 1)*mod;
        M %= mod;
    }
}

long long modpow(long long x, long long n){
    if(n==0) return 1;
    long long res=modpow(x, n/2);

    if(n%2==0) return res*res%mod;
    else return res*res%mod*x%mod;
}

int getl(int i, int N) { return i==0? N-1:i-1; };
int getr(int i, int N) { return i==N-1? 0:i+1; };



/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */
/* <-----------------------------------------------------------------------------------> */

bool check(int p, int k, std::vector<int> const &w) {
    int n = w.size();
    int cnt = 1;
    int tmp = 0;
    
    for(int i=0; i<n; ++i) {
        if(w[i] > p) { return false; }
        else if(tmp + w[i] <= p) { tmp += w[i]; }
        else {
            cnt++;
            tmp = w[i];
        }
    }
    return cnt<=k;
}

int main() {
    
    int n, k;
    scanf("%d %d", &n, &k);
    std::vector<int> w(n);
    for(int i=0; i<n; ++i) { scanf("%d", &w[i]); }

    int left = 0;
    int right = 1e9+1;
    while(right-left > 1) {
        int mid = (left+right) / 2;
        if(check(mid, k, w)) { right = mid; }
        else { left = mid; }
    }
    printf("%d\n", right);
    
    

    return 0;
}

