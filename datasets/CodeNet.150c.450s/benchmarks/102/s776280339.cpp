#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)
typedef vector<int> vi;
typedef vector<string> vs;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

inline bool in(int x, int y,int w,int h){
    return 0<=x&&0<=y && y<h && x<w;
}

int solve(vs & g){
    int h=g.size();int w=g[0].size();
    int sx,sy;
    rep(i,h)rep(j,w)if(g[i][j]=='@'){
        sx=j;sy=i;
    }


    while(1){
        bool fine=true;
        
        rep(y,h)rep(x,w){
            if(g[y][x]=='@'){
                rep(d,4){
                    int nx=x+dx[d];
                    int ny=y+dy[d];
                    if(!in(nx,ny,w,h)) continue;
                    if(g[ny][nx]!='.') continue;
                    g[ny][nx]='@';
                    fine=false;
                }
            }
        }
        
        if(fine)break;
    }

    // rep(i,h)cout<<g[i]<<endl;

    int c=0;
    rep(i,h)rep(j,w)c+=g[i][j]=='@';
    return c;
}


int main(){
    int w,h;
    while(cin>>w>>h && w){
        vs g(h);
        rep(i,h)cin>>g[i];
        cout<<solve(g)<<endl;
    }
}