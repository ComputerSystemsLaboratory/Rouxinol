#include<bits/stdc++.h>
using namespace std;

int maze[21][21];

int main(){
while(1){

    int cnt = 0;
    int n;

    cin >> n;
    if(n == 0) break;
    for(int i=0; i < 21; i++)for(int j=0; j < 21; j++) maze[i][j] = 0;

    for(int i=0; i< n; i++){
        int x, y;
        cin >> x >> y;
        maze[x][y] = 1;
    }

    int m;
    int nx = 10, ny = 10;
    cin >> m;
    for(int i=0; i < m; i++){
        char deg;
        int dis;
        cin >> deg >> dis;
        if(deg == 'N'){
            for(int j=0; j < dis; j++){
                ny += 1;
                if(maze[nx][ny] == 1){
                    cnt++;
                    maze[nx][ny] = 0;
                }
            }
        }
        else if(deg == 'S'){
            for(int j=0; j < dis; j++){
                ny -= 1;
                if(maze[nx][ny] == 1){
                    cnt++;
                    maze[nx][ny] = 0;
                }
            }
        }
        else if(deg == 'E'){
            for(int j=0; j < dis; j++){
                nx += 1;
                if(maze[nx][ny] == 1){
                    cnt++;
                    maze[nx][ny] = 0;
                }
            }
        }
        else if(deg == 'W'){
            for(int j=0; j < dis; j++){
                nx -= 1;
                if(maze[nx][ny] == 1){
                    cnt++;
                    maze[nx][ny] = 0;
                }
            }
        }

    }


    if(cnt == n) cout << "Yes" << endl;
    else cout << "No" << endl;

}

    return 0;
}

