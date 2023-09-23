#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

int prime[1000010];
bool isPrime[1000010];
int sum[1000010];
void sieve(int n){
    rep(i, 0, n) isPrime[i] = true;
    int now = 0;
    isPrime[0] = isPrime[1] = false;
    rep(i, 2, n){
        if(isPrime[i]){
            prime[now++] = i;
            for(int j = 2 * i; j < n; j += i) isPrime[j] = false;
        }
    }
    return;
}

signed main(){
    sieve(1000000);
    rep(i, 1, 1000000){
        sum[i] += sum[i - 1];
        if(isPrime[i]) sum[i]++;
    }
    int n;
    while(cin >> n){
        cout << sum[n] << endl;
    }
}