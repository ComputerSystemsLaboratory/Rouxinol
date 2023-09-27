#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <complex>
#include <cassert>
#include <vector>
#include <iomanip>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main(){
    vll dp(35);
    dp[0] = 1;
    rep(i, 35){
        rep(j, 4)if (j){
            if (i - j >= 0){
                dp[i] += dp[i - j];
            }
        }
    }
    int n;
    while (cin >> n && n){
        cout << dp[n] / 10 / 365 + 1<< endl;
    }
}