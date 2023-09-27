#include <iostream>
using namespace std;
int w,h;
int tx[4] = {0,-1,0,1};
int ty[4] = {-1,0,1,0};
char map[21][21];

int slv(int x,int y){
    map[y][x]='#';
    int ans=0;
    for(int i=0;i<4;++i)
        if( x+tx[i]!=-1 && y+ty[i]!=-1 && x+tx[i]!=w && y+ty[i]!=h)
            if( map[y+ty[i]][x+tx[i]] == '.' )
                ans+=slv( x+tx[i], y+ty[i] ) + 1 ;
    return ans;
}

int main()
{
    int ix,iy;
    while(1){
        cin >> w >> h;
        if(w==0&&h==0)break;
        for(int i=0;i<h;++i)
            for(int j=0;j<w;++j){
                cin >> map[i][j];
                if(map[i][j]=='@'){ix=j;iy=i;}
            }
        cout << slv( ix , iy ) + 1 << endl;
    }
    return 0;
}