#include <iostream>
#include <cstdio>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

int grid[15][10005];
int r,c;
int res=1e9;

void change(int row){
    for(int j=0;j<c;j++){
        if(grid[row][j]==1){
            grid[row][j]=0;
        }else{
            grid[row][j]=1;
        }
    }
}

int count(){
    int bad=0,col_bad=0;
    for(int j=0;j<c;j++){
        col_bad=0;
        for(int i=0;i<r;i++){
            if(grid[i][j]==1){
                col_bad++;
            }
        }
        bad+=min(col_bad,r-col_bad);
        if(bad>res){
            return bad;
        }
    }
    return bad;
}

void dfs(int row){
    if(row==r){
        int bad=count();
        res=min(res,bad);
        return;
    }

    dfs(row+1);

    change(row);
    dfs(row+1);
    change(row);


}


int main(){
    while(true){
        cin>>r>>c;
        res=1e9;
        if(r==0&&c==0) break;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >> grid[i][j];
            }
        }

        dfs(0);
        cout<<r*c-res<<endl;
    }

    return 0;
}
