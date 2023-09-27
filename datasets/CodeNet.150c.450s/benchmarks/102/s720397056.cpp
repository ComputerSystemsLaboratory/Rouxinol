#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int h,w;
char mp[111][111];
int xx[4]={0,1,0,-1};
int yy[4]={-1,0,1,0};
int sx,sy;

int tile(int y,int x){
    if(y<h&&x<w&&y>=0&&x>=0&&mp[y][x]!='#'){
        mp[y][x]='#';
        int t=0;
        for(int i=0;i<4;i++){
            t+=tile(y+yy[i],x+xx[i]);
        }
        return t+1;
    }
return 0;
}

int main(){
    
    while(1){
    
        scanf(" %d %d",&w,&h);
        
        if(w==0&&h==0)break;
        
        for(int i=0;i<h;i++){
            scanf(" %s",mp[i]);
            for(int j=0;j<w;j++){
                if(mp[i][j]=='@'){
                    sx=j;
                    sy=i;
                }
            }
        }
        
        cout << tile(sy,sx) << endl;
        
    }
    
    return 0;
    
}