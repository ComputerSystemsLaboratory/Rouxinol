#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <stack>
using namespace std;
int grid[51][51];
int w, h, ans;
void dfs(int i, int j){ //iが縦jが横
    if(i<0||j<0||grid[i][j]==0) return ;
    grid[i][j]=0;
    
    for(int n=-1; n<=1; ++n){
        for(int m=-1; m<=1; ++m){
            dfs(i+n, j+m);
        }
    }
    return ;
}
int main() {
    while(cin >> w >> h, w||h){
        
        for(int i=0; i<h; ++i){
            for(int j=0; j<w; ++j){
                cin >> grid[i][j];
            }
        }
        ans = 0;
        for(int i=0; i<h; ++i){
            for(int j=0; j<w; ++j){
                if(grid[i][j]==1){
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
        
    return 0;
}
