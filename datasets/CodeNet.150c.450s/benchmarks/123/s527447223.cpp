#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;

// Prime Numbers

bool isprime(int x){
    if (x == 2) return true;
    if (x < 2 || x % 2 == 0) return false;
    int i = 3;
    while(i*i <= x){
        if (x % i == 0){
            return false;
        }
        i = i + 2;
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    int ans = 0;
    int t;
    REP(i,N){
        cin >> t;
        if(isprime(t)) ans++;
    }
    cout << ans << endl;
    return 0;
}