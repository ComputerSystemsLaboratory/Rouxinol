#include <cstdio>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

struct knapsack{
    int value = 0;
    int weight = 0;
};

int N, W;
vector<knapsack> vk;
int memo[101][10001];

int dp(int i, int j){
    if(memo[i][j] > 0){
        return memo[i][j];
    }
    
    int result;
    
    if(i == N){
        result = 0;
    }else if(vk[i].weight > j){
        result = dp(i+1, j);
    }else{
        result = max(dp(i+1,j), dp(i+1, j-vk[i].weight) + vk[i].value);
    }
    
    return memo[i][j] = result;
}

int main(){
    int v, w;
    
    scanf("%d %d", &N, &W);
    
    for(int i = 0;i < N;i++){
        scanf("%d %d", &v, &w);
        vk.push_back({v, w});
    }
    
    memset(memo, 0, sizeof(memo));
    printf("%d\n", dp(0, W));
    
    return 0;
}