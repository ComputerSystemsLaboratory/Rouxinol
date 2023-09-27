#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX_N 50001
using namespace std;
int n, m;
int dp[MAX_N];//I think that when i use dp, using one demention array is too difficult to coding for me.


int knapsack() {
    //cout << "let's napsack!" << endl;
    //initialize
    memset(dp, 0, sizeof(dp));
    
    //input
    int value[m];
    for(int r = 0; r < m; r++){ cin >> value[r]; dp[value[r]]++; }
    
    
    //calculate
    //for(int r = 0; r < m; r++) { //Usually, I confuse about roop's end. -> unnecessary
        for(int c = 1; c < n; c++) {
            //This 'if' statement's contents usually complecated
            if(dp[c] != 0) {
                for(int k = 0; k < m; k++) {
                    if(c + value[k] > n) continue;
                    if(dp[c + value[k]] == 0){ dp[c + value[k]] = dp[c] + 1; continue;}
                    dp[c + value[k]] = min(dp[c + value[k]], dp[c] + 1);
                }
            }
        }
    //}
    return(dp[n]);
}

int main(void) {
    //cout << "start" << endl;
    cin >> n >> m;
    
    cout << knapsack() << endl;
    return(0);
}