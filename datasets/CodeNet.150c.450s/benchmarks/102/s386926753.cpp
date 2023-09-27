#include <iostream>
using namespace std;

int w, h, black;
char tile[24][24];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    black++;
    tile[x][y] = '#';
    for(int i = 0; i < 4; i++){
        if( x+dx[i] >= 0 && x+dx[i] < h &&
           y+dy[i] >= 0 && y+dy[i] < w &&
           tile[ x+dx[i] ][ y+dy[i] ] == '.' ){
            dfs( x+dx[i], y+dy[i] );
        }
    }
}

int main(){
    int i, j;
    while( cin >> w >> h){
        if(w==0&&h==0)
            break;
        for(i = 0; i < h; i++){
            for(j=0;j<w;j++){
                cin >> tile[i][j];
            }
        }
        black = 0;
        for(j = 0; j < w && !black; j++){
            for(i = 0; i < h && !black; i++){
                if( tile[i][j] == '@' ){
                    dfs(i, j);
                }
            }
        }
        cout << black << endl;
    }
    return 0;
}