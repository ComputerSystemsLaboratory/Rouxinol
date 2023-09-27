#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int dy[]={0,0,-1,1},dx[]={-1,1,0,0};
class data{
public:
    int y,x;
    data(int _y,int _x){
        y=_y;x=_x;
    }
    data(){}
};
int main(){
    int w,h;
    while(cin>>w>>h,h||w){
        char field[20][21];
        bool f[20][20]={{0}};
        for(int i=0;i<h;i++)cin>>field[i];
        int sy,sx;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(field[i][j]=='@'){
                    sy=i;
                    sx=j;
                }
            }
        }
        queue<data>Q;
        Q.push(data(sy,sx));
        int cnt=0;
        while(Q.size()){
            data a=Q.front();Q.pop();
            int y=a.y,x=a.x;
            if(y<0||y>=h||x<0||x>=w)continue;
            if(f[y][x])continue;
            if(field[y][x]=='#')continue;
            f[y][x]=true;
            cnt++;
            for(int i=0;i<4;i++){
                Q.push(data(y+dy[i],x+dx[i]));
            }
        }
        cout<<cnt<<endl;
    }
}