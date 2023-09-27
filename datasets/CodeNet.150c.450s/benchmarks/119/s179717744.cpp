#include <iostream>
#include <cmath>
#include <string>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#define debug(x) cerr << #x << ':' << x << endl
using namespace std;
typedef long long ll;

int dx[8]={1,1,0,-1,-1,-1,0,1}, dy[8]={0,1,1,1,0,-1,-1,-1};
void dfs(int x, int y, int Map[51][51], int h, int w){
    if(!(0<=x && x <=h-1 && 0<=y && y<=w && Map[x][y]==1)) return;
    Map[x][y]=0;
    for(int i=0; i<8; i++)
        dfs(x+dx[i], y+dy[i], Map, h, w);
}

void disp(int Map[51][51], int h, int w){
    cout << "==========" << endl;
    for(int x=0; x<=h-1; x++){
        for(int y=0; y<=w-1; y++) cout << Map[x][y] << "";
        cout << endl;
    }
    cout << "==========" << endl;
}

int main(){
    int Map[51][51]={};
    int h, w;
    while(1){
        cin >> w >> h;
        if(h == 0 && w ==0) break;
        for(int x=0; x<=h-1; x++)
            for(int y=0; y<w; y++)
                cin >> Map[x][y];
        
        int cnt=0;
        for(int x=0; x<=h-1; x++)
            for(int y=0; y<w; y++){
                // cout << "before" << endl;
                // disp(Map, h, w);
                if(Map[x][y]==1) dfs(x, y, Map, h, w), cnt++;
                // cout << "after" << endl;
                // disp(Map, h, w);
            }
                
        
        cout << cnt << endl;
    }
    return 0;
}
