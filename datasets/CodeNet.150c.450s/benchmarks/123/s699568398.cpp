#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

bool isPrime(int n){
    for(int i = 2; i*i <=n ;i++){
        if(n % i == 0) return false;
    }
    return n != 1;
}

signed main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i, 0, n){
        int a;
        cin >> a;
        if(isPrime(a)) ans++;
    }
    cout << ans << endl;
}