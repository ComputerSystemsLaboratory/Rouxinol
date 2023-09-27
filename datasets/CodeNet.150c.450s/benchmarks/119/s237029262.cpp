#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

void dfs(int x,int y,vector<vector<bool> >&map){
    if(!map[x][y])return;
    map[x][y]=false;
    for(int i=-1;i<2;i++)
    for(int j=-1;j<2;j++){
        if(i==0 && j==0)continue;
        int nx=x+i;
        int ny=y+j;
        dfs(nx,ny,map);
    }
    return;
}

int main(){
    while(true){
        int w,h;
        cin >> w >> h;
        if(w==0)break;
        vector<vector<bool> > map(h+2,vector<bool>(w+2,false));
        for(int i=1;i<=h;i++)
        for(int j=1;j<=w;j++){
            int t;
            cin >> t;
            if(t==1)map[i][j]=true;
        }

        int ans=0;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                if(map[i][j]){
                    ans++;
/*                    for(int k=1;k<=w;k++){
                    for(int l=1;l<=h;l++){
                        if(map[l][k])cout<<'o';
                        else cout << '_';
                    }
                    cout << endl;
                    }
                    cout << endl;*/
                    dfs(i,j,map);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}