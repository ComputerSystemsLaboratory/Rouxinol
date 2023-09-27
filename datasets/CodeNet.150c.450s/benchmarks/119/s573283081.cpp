#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<string.h>
#include<queue>
#include<stack>
#include<climits>
#include<cmath>
using namespace std;

int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={1,0,-1,-1,-1,0,1,1};
int m,n;
bool v[51][51];
int ma[51][51];

void go(int x,int y){
    v[y][x]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<m&&ny>=0&&ny<n&&!v[ny][nx]&&ma[ny][nx]==1){
            go(nx,ny);
        }
    }
}

int main(){
    while(cin>>m>>n,m){
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=0;
                cin>>ma[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0&&ma[i][j]==1){
                    ans++;
                    go(j,i);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}