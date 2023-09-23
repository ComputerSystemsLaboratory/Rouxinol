#include <bits/stdc++.h>

using namespace std;

int n;
int data[100];
long long int dp[200][21];

long long int solve(int idx, int sum) {

    if(sum < 0 || sum > 20) return 0;

    if(dp[idx][sum] != -1) return dp[idx][sum];

    if(idx == n - 1) {
        if(sum == data[n - 1]) return 1;
        else return 0;
    }

    long long int ret = 0;

    ret += solve(idx + 1, sum + data[idx]);
    ret += solve(idx + 1, sum - data[idx]);

    return dp[idx][sum] = ret;

}

int main() {

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(1, data[0]) << endl;

}