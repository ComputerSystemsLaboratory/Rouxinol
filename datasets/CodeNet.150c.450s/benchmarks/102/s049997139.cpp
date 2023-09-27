//
//  RedAndBlack.cpp
//  
//
//  Created by ??°????????? on 2015/10/30.
//
//

#include <iostream>
using namespace std;

int w, h, num = 0, room[20][20], check[20][20];

void dfs(int x, int y) {
//    cout << x << ", " << y << endl;
    
    if (room[y][x] == 0) return;
    
    num++;
    
//    cout << "num: " << num << endl;
    
    room[y][x] = 0;
    
    // ??????????????¢?´¢
    if (y-1 > -1) dfs(x, y-1);
    if (y+1 < h) dfs(x, y+1);
    if (x-1 > -1) dfs(x-1, y);
    if (x+1 < w) dfs(x+1, y);

    return;
}

int main() {
    while (cin >> w >> h) {
        if (w == 0 && h == 0) break;
        
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