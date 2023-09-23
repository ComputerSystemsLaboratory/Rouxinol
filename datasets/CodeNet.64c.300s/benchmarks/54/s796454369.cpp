#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <algorithm>
using namespace std;

typedef unsigned long long ll;

int n;
int a[100];
ll dp[100][21]; //dp[idx][sum]

ll rec(int idx, int sum)
{
    if(dp[idx][sum] != -1) {
        return dp[idx][sum];
    }
    
    ll ret = 0;
    if(sum + a[idx] <= 20) {
        ret += rec(idx + 1, sum + a[idx]);
    }
    if(sum - a[idx] >= 0) {
        ret += rec(idx + 1, sum - a[idx]);
    }

    return (dp[idx][sum] = ret);
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 21; j++) {
            if(i == n - 1 && j == a[n - 1]) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = -1;
            }
        }
    }

    if(n == 100) {
        cout << rec(0, 0) / 2 << endl;
    } else {
        cout << rec(0, 0) << endl;
    }
}