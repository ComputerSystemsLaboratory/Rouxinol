//その２：メモ化再帰

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX_N 100
#define MAX_W 10000
using namespace std;
int dp[MAX_N][MAX_W];
int n, W;
struct Item {
    int weight;
    int value;
};
typedef struct Item Item;
Item data[MAX_N];

//pos番目の荷物から、重さj以下になるように選んで行く
int knapsack(int pos, int j) {
    if(pos >= n) return(0);
    if(dp[pos][j] != -1) return(dp[pos][j]);
    else if(j < data[pos].weight) return(knapsack(pos + 1, j));
    else {
        return(dp[pos][j] = max(knapsack(pos + 1, j), knapsack(pos + 1, j - data[pos].weight) + data[pos].value));
    }
}

void solve() {
    memset(dp, -1, sizeof(dp));
    cout << knapsack(0, W) << endl;
}

int main(void) {
    cin >> n >> W;
    
    for(int r = 0; r < n; r++) cin >> data[r].value >> data[r].weight;
    solve();
    return(0);
}