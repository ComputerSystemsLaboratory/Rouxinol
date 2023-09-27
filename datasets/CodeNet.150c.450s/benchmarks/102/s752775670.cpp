//
//  RedAndBlack.cpp
//  
//
//  Created by ??°????????? on 2015/10/30.
//
//

#include <iostream>
using namespace std;

int w, h, num = 0, room[20][20];
int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

void dfs(int x, int y) {
    num++;
    room[y][x] = 0;
    
    // ??????????????¢?´¢
    for (int i = 0; i < 4; i++) {
        int mx = x + dx[i];
        int my = y + dy[i];
        
        if (mx < 0 || w <= mx) continue;
        if (my < 0 || h <= my) continue;
        if (room[my][mx] == 0) continue;
        dfs(mx, my);
    }

    return;
}

int main() {
    while (cin >> w >> h, w || h) {
        int manX, manY;
        
        for (int i = 0; i < h; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < w; j++) {
                if (s[j] == '.') {
                    room[i][j] = 1;
                } else if (s[j] == '#') {
                    room[i][j] = 0;
                } else if (s[j] == '@') {
                    room[i][j] = 1;
                    manX = j;
                    manY = i;
                }
            }
        }
        
        dfs(manX, manY);
        
        cout << num << endl;
        
        num = 0;
    }
    
    return 0;
}