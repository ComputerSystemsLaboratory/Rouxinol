#include <iostream>
#include <algorithm>

#define MAX_R 10
#define MAX_C 10000
#define rep(a) for(int i = 0, i < (a), ++i)

int R, C, ans;
int field[MAX_R][MAX_C];
bool flag[MAX_R] = {false};

void solve(int n);

int count();

int main(){
    while(true){
        std::cin >> R >> C;
        if(R == 0 && C == 0)
            break;
        for(int i = 0; i < R; ++i){
            for(int j = 0; j < C; ++j){
                std::cin >> field[i][j];
            }
        }
        ans = 0;
        solve(0);
        std::cout << ans << std::endl;
    }
    return 0;
}

void solve(int n){
    if(n == R){
        ans = std::max(ans, count());
        return;
    }
    
    flag[n] = true;
    solve(n + 1);
    
    flag[n] = false;
    solve(n + 1);
    
    return;
}

int count(){
    int res = 0;
    
    for(int i = 0; i < C; ++i){
        int tmp =0;
        for(int j = 0; j < R; ++j){
            if((flag[j] && !field[j][i]) || (!flag[j] && field[j][i])) ++tmp;
        }
        res += std::max(tmp, R - tmp);
    }
    
    return res;
}