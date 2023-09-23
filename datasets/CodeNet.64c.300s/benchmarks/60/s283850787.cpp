#include <iostream>

const int INF = 100000000;
const int MAX_AB = 20;
const int MAX_N = 50;
int N, A, B;
int memo[MAX_AB][MAX_AB];
bool obstacle[MAX_AB][MAX_AB] = {false};

long dfs(long x, long y);

int main(){
    while(true){
        std::cin >> A >> B;
        if(A == 0 && B == 0)
            break;
        std::cin >> N;
        
        for(int i = 0; i < MAX_AB; ++i){
            for(int j = 0; j < MAX_AB; ++j){
                obstacle[i][j] = false;
                memo[i][j] = INF;
            }
        }

        for(int i = 0; i < N; ++i){
            int x, y;
            std::cin >> x >> y;
            --x, --y;
            obstacle[x][y] = true;
        }

        std::cout << dfs(A - 1, B - 1) << std::endl;
    }
    return 0;
}

long dfs(long x, long y){
    if(memo[x][y] != INF)
        return memo[x][y];
    else if(obstacle[x][y])
        return memo[x][y] = 0;
    else if(x == 0 && y == 0)
        return memo[x][y] = 1;
    else
        return memo[x][y] = (x - 1 >= 0 ? dfs(x - 1, y) : 0) + (y - 1 >= 0 ? dfs(x, y - 1) : 0);
}