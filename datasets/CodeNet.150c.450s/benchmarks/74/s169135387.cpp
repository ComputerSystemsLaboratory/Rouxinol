#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX_N 50001
#define MAX_M 21
using namespace std;
int n, m;
int value[MAX_M];

int solve() {
    int coin[MAX_N];
    memset(coin, MAX_N, sizeof(coin));
    coin[0] = 0;

    for(int r = 0; r < m; r++) {
        int val = value[r];
        for(int c = val; c <= n; c++) {
            coin[c] = min(coin[c], coin[c - val] + 1);
        }
    }
    return(coin[n]);
}

int main(void) {
    cin >> n >> m;
    for(int r = 0; r < m; r++) cin >> value[r];
    
    cout << solve() << endl;
    return(0);
}