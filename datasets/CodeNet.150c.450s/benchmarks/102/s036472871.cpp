#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;

int dw[] = {0, 0, 1, -1};
int dh[] = {1, -1, 0, 0};

int dfs(vector<string>& field, int h, int w){
    int H = field.size();
    int W = field[0].size();
    
    field[h][w] = 'a';
    int res = 1;
    
    for(int i=0; i<4; i++){
        int nh = h + dh[i];
        int nw = w + dw[i];
        if(nh<0 || H<=nh || nw<0 || W<=nw || field[nh][nw] != '.')
            continue;
        res += dfs(field, nh, nw);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int W, H;
    while(cin>>W>>H, W|H){
        vector<string> field(H);
        for(int i=0; i<H; i++)
            cin >> field[i];
        
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                if(field[i][j] == '@'){
                    cout << dfs(field, i, j) << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}