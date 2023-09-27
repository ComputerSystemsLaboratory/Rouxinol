#include <bits/stdc++.h>
using namespace std;

const int dx[] = {0,1,1,1,0,-1,-1,-1};
const int dy[] = {1,1,0,-1,-1,-1,0,1};

void dfs(int y,int x,vector<vector<int> >&m){
    m[y][x]=0;
    for(int i=0;i<8;i++){
        int nexty=y+dy[i];
        int nextx=x+dx[i];
        if(nexty<0||nexty>m.size()-1||nextx<0||nextx>m[0].size()-1)continue;
        if(m[nexty][nextx]==1)dfs(nexty,nextx,m);
    }
}


int main(void){
    int h,w;
    int ans;
    vector<vector<int> >m;
    while(true){
        cin>>w>>h;
        if(h==0)break;
        ans=0;
        m=vector<vector<int> >(h,vector<int>(w));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>m[i][j];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(m[i][j]==1){dfs(i,j,m);ans++;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
