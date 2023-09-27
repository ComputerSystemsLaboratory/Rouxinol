//
//  main.cpp
//  ICPC2009B
//
//  Created by aki33524 on 2014/07/02.
//  Copyright (c) 2014年 aki33524. All rights reserved.
//

#include <iostream>
using namespace std;

int H, W;
int field[50][50];
int dh[] = {0, 0, 1, -1};
int dw[] = {1, -1, 0, 0};

void dfs(int h, int w){
    field[h][w] = 0;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            int nh = h + i;
            int nw = w + j;
            if(0<=nh&&nh<H && 0<=nw&&nw<W && field[nh][nw])
                dfs(nh, nw);
        }
    }
}

void solve(){
    int ans = 0;
    for(int h=0; h<H; h++){
        for(int w=0; w<W; w++){
            if(field[h][w]){
                dfs(h, w);
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(int argc, const char * argv[])
{
    while(cin >> W >> H, H|W){
        for(int h=0; h<H; h++){
            for(int w=0; w<W; w++){
                cin >> field[h][w];
            }
        }
        solve();
    }
    
    return 0;
}