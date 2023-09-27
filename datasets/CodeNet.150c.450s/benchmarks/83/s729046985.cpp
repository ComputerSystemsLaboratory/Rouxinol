#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>

using namespace std;

int DP[10001];

//first:value, second:weight
pair<int, int> goods[101];

int main(){
    
    int N, W, ans = 0;
    scanf("%d", &N);
    scanf("%d", &W);

    for (int i = 0; i< N ; i++) {
        scanf("%d %d", &goods[i].first, &goods[i].second);
    }
    
    fill(DP, DP + 10001 , -1);
    DP[0] = 0;
    /*
    for (int i = 0; i < N; i++) {
        for (int j = 0; j + goods[i].second <= W; j++) {
            if (DP[j] != -1){
                DP[j + goods[i].second] = max(DP[j + goods[i].second], DP[j] + goods[i].first);
            }
        }
    }*/
    
    
    for (int i = 0; i < N; i++) {
        for (int j = W; j >=0; j--) {
            if (DP[j] != -1 && j + goods[i].second <= W){
                DP[j + goods[i].second] = max(DP[j + goods[i].second], DP[j] + goods[i].first);
            }
        }
    }
    
    for (int i = 0; i <= W; i++) {
        ans = max(ans, DP[i]);
    }
    cout << ans << endl;
    
    return 0;
}