#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int dfs(int x, int y, vector<vector<bool> >& map){
    map[y][x] = false;
    int num=1;
    for(int i=0; i<4; i++){
        if(map[y+dy[i]][x+dx[i]]){
            num+= dfs(x+dx[i], y+dy[i], map);
        }
    }
    return num;
}

int main(){
    while(1){
        int W,H;
        cin >> W >> H;
        if(W==0) break;

        vector<vector<bool> > map(H+2, vector<bool>(W+2,false));
        int sx,sy;
        for(int y=1; y<=H; y++){
            for(int x=1; x<=W; x++){
                char tmp;
                cin >> tmp;
                if(tmp == '#'){
                    map[y][x]=false;
                }else{
                    map[y][x]=true;
                }
                if(tmp == '@'){
                    sx = x;
                    sy = y;
                }
            }
        }

        cout << dfs(sx,sy,map) << endl;
    }
    return 0;
}