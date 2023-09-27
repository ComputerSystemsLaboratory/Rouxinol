#include <iostream>
#include<queue>
struct cheese{
    int x,y;
};
using namespace std;
int map[1001][1001],walk[1001][1001];
int main(void){
    int X,Y,sx,sy,gx,gy,xx,yy,N,Ncnt=1,i,i2,ans=0,bx[4]={1,-1,0,0},by[4]={0,0,1,-1};
    char nyuryoku[1001][1001];
    queue<cheese> jotai;
    cheese ima,tugi;
    cin>>Y>>X>>N;
    for(i=1;i<=Y;i++){
        for(i2=1;i2<=X;i2++){
            cin>>nyuryoku[i2][i];
        }
    }
    for(i=1;i<=Y;i++){
        for(i2=1;i2<=X;i2++){
            switch(nyuryoku[i2][i]){
                case 'S':
                    map[i2][i]=0;
                    sx=i2;
                    sy=i;
                    break;
                case 'X':
                    map[i2][i]=-1;
                    break;
                case '.':
                    map[i2][i]=0;
                    break;
                case '1':
                    map[i2][i]=1;
                    break;
                case '2':
                    map[i2][i]=2;
                    break;
                case '3':
                    map[i2][i]=3;
                    break;
                case '4':
                    map[i2][i]=4;
                    break;
                case '5':
                    map[i2][i]=5;
                    break;
                case '6':
                    map[i2][i]=6;
                    break;
                case '7':
                    map[i2][i]=7;
                    break;
                case '8':
                    map[i2][i]=8;
                    break;
                case '9':
                    map[i2][i]=9;
                    break;
            }
        }
    }
    while(Ncnt<=N){
        for(i=1;i<=Y;i++)for(i2=1;i2<=X;i2++)walk[i2][i]=-1;
        walk[sx][sy]=0;
        ima.x=sx;
        ima.y=sy;
        jotai.push(ima);
        while(!jotai.empty()){
            ima=jotai.front();
            jotai.pop();
            for(int I=0;I<4;I++){
                xx=ima.x+bx[I];
                yy=ima.y+by[I];
                //cout<<"xx="<<xx<<" yy="<<yy<<endl<<map[ima.x][ima.y]<<endl;
                if(map[ima.x][ima.y]==Ncnt){
                    gx=ima.x;
                    gy=ima.y;
                }
                else if(xx>0&&yy>0&&xx<=X&&yy<=Y&&((walk[xx][yy]>walk[ima.x][ima.y]+1)||walk[xx][yy]==-1)&&map[xx][yy]!=-1){
                    tugi.x=xx;
                    tugi.y=yy;
                    walk[xx][yy]=walk[ima.x][ima.y]+1;
                    /*
                    for(i=1;i<=Y;i++){
                        for(i2=1;i2<=X;i2++){
                            if(walk[i2][i]>-1)cout<<' ';
                                cout<<walk[i2][i]<<' ';
                            }
                        cout<<endl;
                    }
                    cout<<endl;
                    */
                    jotai.push(tugi);
                }
            }
        }
        ans+=walk[gx][gy];
        sx=gx;
        sy=gy;
        Ncnt++;
    }
    cout<<ans<<endl;
    /*for(i=1;i<=Y;i++){
        for(i2=1;i2<=X;i2++){
            if(map[i2][i]>-1)cout<<' ';
            cout<<map[i2][i]<<' ';
        }
        cout<<endl;
    }*/
}