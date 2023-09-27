
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#define INF 100000
using namespace std;

char G[20][20];
int used[20][20];
int ans;

void dfs(int x, int y, int H, int W){
    if (x<0 || x>= W || y<0 || y>= H || G[y][x]== '#') {
        return;
    }
    if (G[y][x]=='.') {
        ans++;
    }
    used[y][x]=0;
    if (used[y-1][x]) dfs(x, y-1, H, W);
    if (used[y+1][x]) dfs(x, y+1, H, W);
    if (used[y][x-1]) dfs(x-1, y, H, W);
    if (used[y][x+1]) dfs(x+1, y, H, W);
    
    return;
}


int main(){
    for (; ;) {
        int H, W;
        cin >> W>> H;
        if (H==0 && W==0) return 0;
        for (int i=0; i<H; i++) {
            for (int j=0; j<W; j++) {
                used[i][j]=1;
                G[i][j]= '#';
            }
        }
        ans = 0;
        int sx=0,sy=0;
        for (int i=0; i<H; i++) {
            for(int j=0; j<W; j++){
                char p;
                cin >> p;
                G[i][j] = p;
                if (p=='@') {
                    sx = j;
                    sy = i;
                    G[i][j]= '.';
                }
            }
        }
        dfs(sx, sy, H, W);
       /* for (int i=0; i<H; i++) {
            for (int j=0; j<W; j++) {
                cout << used[i][j]<<"|";
            }
            cout << endl;
        }
        for (int i=0; i<H; i++) {
            for (int j=0; j<W; j++) {
                cout << G[i][j]<<"|";
            }
            cout << endl;
        }*/
        cout << ans<< endl;
    }
}