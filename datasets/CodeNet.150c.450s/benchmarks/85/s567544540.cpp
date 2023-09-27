#include <iostream>
using namespace std;

const int INF = 1 << 28;

int n;
int memo[101][101];
int r[102];

int dfs(int i, int j){
    int res = INF;
    
    if(memo[i][j] != -1) return memo[i][j];
    
    if(i == j){
        return 0;
    }
    
    for(int k = i; k < j; ++k){
        res = min(res, dfs(i,k) + dfs(k + 1, j) + r[i] * r[k + 1] * r[j + 1]);    
    }
    
    return memo[i][j] = res;
}


int main()
{

    cin >> n;
    fill((int*)memo, (int*)(memo + n), -1);
    for(int i = 0; i < n; ++i){
        cin >> r[i] >> r[i + 1];
    }
    
    cout << dfs(0, n-1) << endl;
    
}