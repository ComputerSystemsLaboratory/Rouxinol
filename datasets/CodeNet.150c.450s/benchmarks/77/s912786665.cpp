#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
 
int g[20][20];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
 
int main(void){
 
    int n,m;
    map<char,int>dd;
    dd['N']=0;
    dd['E']=1;
    dd['S']=2;
    dd['W']=3;
 
    while(cin >> n,n){
        fill(g[0],g[20],0);
 
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            g[y][x]=1;
        }
 
        cin >> m;
        int x=10,y=10;
        g[y][x]=0;
        for(int i=0;i<m;i++){
            char dir;
            int dis;
            cin >> dir >> dis;
            for(int k=0;k<dis;k++){
                x+=dx[dd[dir]],y+=dy[dd[dir]];
                g[y][x]=0;
            }
        }
 
        bool fg=true;
        for(int i=0;i<20;i++)
            for(int j=0;j<20;j++)
                fg&=(g[i][j]==0);
 
        if(fg)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 
    return 0;
}