#include <cstdio>
#include <iostream>
#define MAX_INDEX 100
using namespace std;
int H,W;
char field[MAX_INDEX + 1][MAX_INDEX + 1];
int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};
bool check(int nx,int ny,char now){
    return nx >= 0 && nx < H && ny >= 0 && ny < W && field[nx][ny] == now;
}
void dfs(int x,int y){
    char now = field[x][y];
    field[x][y] = '.';
    for(int i = 0 ; i < 4 ; i++){
        int nx = x + dx[i],ny = y + dy[i];
        if(check(nx,ny,now)) dfs(nx,ny);
    }
}
int main(){
    while(cin >> H >> W){
        if(!(H || W)) break;
        for(int i = 0 ; i < H ; i++)
        for(int j = 0 ; j < W ; j++)
            cin >> field[i][j];
        int ans = 0;
        for(int i = 0 ; i < H ; i++)
        for(int j = 0 ; j < W ; j++){
            if(field[i][j] != '.'){
                ans++;
                dfs(i,j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}