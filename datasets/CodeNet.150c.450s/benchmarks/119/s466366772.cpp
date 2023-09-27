#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb push_back

int map[60][60]={};
bool visited[60][60]={false};
int w,h;

int dx[]={-1,0,1,1,1,0,-1,-1};
int dy[]={-1,-1,-1,0,1,1,1,0};

void dfs(int x,int y){
    if(x<0 || x>=w || y<0 || y>=h)return ;
    if(map[y][x]==0)return ;
    if(visited[y][x]==true)return ;
    
    visited[y][x]=true;
    rep(i,8){
        dfs(x+dx[i],y+dy[i]);
    }
}

int main(){
    while(cin>>w>>h){
        rep(i,60)rep(j,60)visited[i][j]=false;
        int c=0;
        if(w==0 || h==0)break;
        
        rep(i,h) rep(j,w) cin>>map[i][j];
        
        rep(i,h){
            rep(j,w){
                if(visited[i][j]==false && map[i][j]==1){
                    dfs(j,i);
                    c++;
                }
            }
        }
        cout<<c<<endl;
        
    }
    
    return 0;
}