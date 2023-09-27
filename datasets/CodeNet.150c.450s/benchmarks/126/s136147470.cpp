#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,maps[20][20];
void    da(int x,int y){
    if(x>a || y>b) return;
    if(maps[y][x]==2) return;
    if(x==a && y==b){d++;return;}
    da(x+1,y);
    da(x,y+1);
}
int main(){
    while(1){
    d=0;
    cin>>a>>b;
    if(a+b==0)break;
    cin>>c;
    int x,y;
    for(int i=1;i<=b;i++)
    for(int j=1;j<=a;j++){maps[i][j]=0;}
        for(int i=0;i<c;i++){
        cin>>x>>y; maps[y][x]=2; }
        da(1,1);
        cout<<d<<endl;
    }
}