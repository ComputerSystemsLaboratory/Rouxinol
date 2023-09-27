#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
using namespace std;

#define MAX 100000

long n, k, w[MAX];

int check(long p){
    long c = 1, a = p;
    
    rep(i, n){
        
        if(w[i] > p) return 0;
        
        if(a < w[i]) {
            c++; a = p;
        }
        
        a -= w[i];
    }
    
    return c <= k;
}

int main(){
    
    cin >> n >> k;
    rep(i, n) cin >> w[i];
    
    long left = 0, right = LONG_MAX;
    
    while(left < right){
        
        long mid = (left + right) / 2;
        
        if(check(mid) && !check(mid - 1)){
            cout << mid << endl;
            return 0;
        }
        
        if(check(mid)) right = mid;
        else left = mid + 1;
    }
}
