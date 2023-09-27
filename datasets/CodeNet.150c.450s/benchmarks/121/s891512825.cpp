#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char field[101][101];
int cou,H,W;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
void func(int x,int y,char mark){
    if(x<0||x>W||y<0||y>H||field[y][x]!=mark)return;
    field[y][x]='0';
    for(int i=0;i<4;i++){
            func(x+dx[i],y+dy[i],mark);
    }
}
int main(){
    for(;;){
        cou=0;
        cin>>H>>W;
        if(H==0&&W==0)break;
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>field[i][j];
            }
        }
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(field[i][j]!='0'){
                    func(j,i,field[i][j]);
                    cou++;
                }
            }
        }
        cout<<cou<<endl;
    }
    return 0;
}