#include<cstdio>
#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
int fld[101][101],H,W,ans,what;
char c;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
void dfs(int y,int x,int fl){
    if(fld[y][x]!=fl||x<0||y<0||x>W-1||y>H-1)return;
    fld[y][x]=0;
    for(int i=0;i<4;i++){
        dfs(y+dy[i],x+dx[i],fl);
    }
}
signed main(){
    for(;;){
        cin>>H>>W;
        if(H==0&&W==0)break;
        ans=0;
        fill(fld[0],fld[0]+101*101,0);
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>c;
                if(c=='@')fld[i][j]=1;//????????´
                if(c=='#')fld[i][j]=2;//??????
                if(c=='*')fld[i][j]=3;//?????????
            }
        }
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(fld[i][j]!=0){
                    ans++;
                    what=fld[i][j];
                    dfs(i,j,what);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}