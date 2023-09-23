//
//  main.cpp
//  0118
//
//  Created by 穎川和弘 on 2014/07/16.
//  Copyright (c) 2014年 穎川和弘. All rights reserved.
//

#include <iostream>
using namespace std;

char map[100][101];
int fdx[] = {1, -1, 0, 0};
int fdy[] = {0, 0, -1, 1};
char chr;
int h, w;

void dfs(int x, int y) {
    if(x < 0 || y < 0 || x >= w || y >= h) return;
    if(map[y][x] == '.' || map[y][x] != chr) return;
    map[y][x] = '.';
    for(int r = 0; r < 4; r++) {
        dfs(x + fdx[r], y + fdy[r]);
    }
}

int main(void) {
    cin.tie();
    ios::sync_with_stdio(false);
    
    while(true) {
        cin >> h >> w;
        if(h + w == 0) break;
        
        for(int r = 0; r < h; r++) {
            for(int c = 0; c < w; c++) {
                cin >> map[r][c];
            }
        }
        
        int count = 0;
        while(true) {
            bool flag = false;
            for(int r = 0; r < h; r++) {
                for(int c = 0; c < w; c++) {
                    if(map[r][c] != '.') {
                        flag = true;
                        chr = map[r][c];
                        dfs(c, r);
                        count++;
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
            if(!flag) break;
        }
        cout << count << endl;
    }
    return(0);
}