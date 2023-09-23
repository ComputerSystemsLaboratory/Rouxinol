#include <iostream>
#include <cstring>

using namespace std;

int N,M;
char map[110][110];
int ans;

void dfs(int x,int y,char ch){
    if(x<1||x>N||y<1||y>M||map[x][y]!=ch) return;
    map[x][y]='.';
    dfs(x+1,y,ch);
    dfs(x-1,y,ch);
    dfs(x,y+1,ch);
    dfs(x,y-1,ch);
}

int main(){
    while(cin>>N>>M&&(N!=0||M!=0)){
        int x,y;
        ans=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                cin>>map[i][j];
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(map[i][j]!='.'){
                    dfs(i,j,map[i][j]);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}