#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)
#define mp std::make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const int INF = 1001001001;

// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

int width, height;
char map[20][20];
int sx, sy;
bool used[20][20];

int dfs(int x, int y){
    used[y][x] = true;

    int res = 1;
    REP(i, 4){
        int nx = x + dx[i], ny = y + dy[i];
        if(0 <= nx && nx < width && 0 <= ny && ny < height &&
           !used[ny][nx] && map[ny][nx] == '.'){
            res += dfs(nx, ny);
        }
    }
    
    return res;
}

int main(){
    while(std::cin >> width >> height, width || height){
        REP(i, height){
            REP(j, width){
                std::cin >> map[i][j];
                if(map[i][j] == '@'){
                    sx = j; sy = i;
                    map[i][j] = '.';
                }
            }
        }

        REP(i, 20){
            REP(j, 20){
                used[i][j] = false;
            }
        }
        std::cout << dfs(sx, sy) << std::endl;
    }
}