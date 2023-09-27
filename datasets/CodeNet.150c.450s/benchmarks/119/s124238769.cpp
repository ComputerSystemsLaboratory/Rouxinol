#include<iostream>
#include<vector>
using namespace std;
int dx[8]={0,1,0,-1,1,1,-1,-1};
int dy[8]={1,0,-1,0,1,-1,1,-1};

bool dfs(int sx,int sy,vector<vector<bool> >&c){
    if(c[sx][sy]==false) return false;
    c[sx][sy]=false;
    for(int i=0;i<8;i++){
        int nx=sx+dx[i];
        int ny=sy+dy[i];
        bool flag=dfs(nx,ny,c);
    }
    return true;
}

int main(void){
    int h,w,temp;
    while(1){
        cin>>w>>h;
        if(w==0) break;
        vector<vector<bool> > c(h+2,vector<bool>(w+2,false)) ;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cin>>temp;
                if(temp==1) c[i][j]=true;
            }
        }
        int t=0;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                bool flag=dfs(i,j,c);
                if(flag) t++;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}