#include <iostream>
using namespace std;

int H,W;
int vx[4] = {1, 0, -1, 0};
int vy[4] = {0, 1, 0, -1};
char map[100][101];

void unite(int x,int y,char t){
    map[x][y] = 65;
    for(int k = 0; k < 4; k++){
        if( x+vx[k] >= 0 && x+vx[k] < H &&
            y+vy[k] >= 0 && y+vy[k] < W &&
            map[ x+vx[k] ][ y+vy[k] ] == t ){
            unite(x+vx[k], y+vy[k], t);
        }
    }
}

int main(){
    while( cin >> H >> W, H|W ){
        int i,j,c;
        for(i = 0; i < H; i++){
            cin >> map[i];
        }
        c = 0;
        for(i = 0; i < H; i++){
            for(j = 0; j < W; j++){
                if( map[i][j] != 65 ){
                    c++;
                    unite(i, j, map[i][j]);
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}