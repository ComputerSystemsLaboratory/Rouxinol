#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

const int MAX = 55;
int n;
int dp[MAX];

int solve(int n) {
    if (dp[n] != -1) return dp[n];
    return dp[n] = (solve(n-1) + solve(n-2));
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    memset(dp, -1, sizeof(dp));
    dp[0] = 1;
    dp[1] = 1;
    scanf("%d", &n);
    printf("%d\n", solve(n));
    return 0;
}