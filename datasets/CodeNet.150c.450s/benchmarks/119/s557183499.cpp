#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[8]={1, 1, 1, 0, 0, -1, -1, -1};
int dy[8]={1, 0, -1, 1, -1, 1, 0, -1};

void dfs(int x, int y, vector<vector<bool> >& map){
    map[y][x] = false;
    for(int i=0; i<8; i++){
        if(map[y+dy[i]][x+dx[i]]){
            dfs(x+dx[i], y+dy[i], map);
        }
    }
}

int main(){
    while(1){
        int W,H;
        cin >> W >> H;
        if(W==0) break;

        vector<vector<bool> > map(H+2, vector<bool>(W+2,false));
        for(int y=1; y<=H; y++){
            for(int x=1; x<=W; x++){
                char tmp;
                cin >> tmp;
                if(tmp == '0'){
                    map[y][x]=false;
                }else{
                    map[y][x]=true;
                }
            }
        }

        int num=0;
        for(int y=1; y<=H; y++){
            for(int x=1; x<=W; x++){
                if(map[y][x]){
                    num++;
                    dfs(x,y,map);
                }
            }
        }
        cout << num << endl;
    }
    return 0;
}