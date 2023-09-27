#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>

using namespace std;

int DP[50001];
int val[21];

int main(){
    
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0;i< m ; i++) {
        scanf("%d", &val[i]);
    }
    
    fill(DP, DP + 50001 , INT_MAX);
    DP[0] = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j + val[i] < 50001; j++) {
            if (DP[j + val[i]] > DP[j] + 1 )
                DP[j + val[i]] = DP[j] + 1;
        }
    }
    cout << DP[n] << endl;
    
    return 0;
}