#include <iostream>
#include <vector>
#include <cstdio>
 
using namespace std;
 
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)

int dp[50];

int f(int n) {
    if(n == 0 || n == 1) return 1;
    if(dp[n]) {
        return dp[n];
    } else {
        return dp[n] = f(n-1) + f(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}