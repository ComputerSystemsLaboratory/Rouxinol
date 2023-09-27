#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fld[10][5];
int Counter(int y,int x){
    int cnt=0,t=fld[y][x];
    while(fld[y][x]==t&&x<5){
        cnt++;
        x++;
    }
    return cnt;
}
void Deleter(int y,int x){
    int t=fld[y][x];
    while(fld[y][x]==t&&x<5){
        fld[y][x]=0;
        x++;
    }
}
void Droper(){
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            if(fld[i][j]==0)continue;
            int y=i-1;
            while(y>=0&&fld[y][j]==0)y--;
            y++;if(y==i)continue;
            fld[y][j]=fld[i][j];
            fld[i][j]=0;
        }
    }
}
void debug(int h){
    cout<<endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<5;j++)cout<<fld[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int h;
    while(cin>>h,h){
        fill_n(*fld,50,0);
        for(int i=h-1;i>=0;i--)
            for(int j=4;j>=0;j--)
                cin>>fld[i][j];
        int Point=0;
        while(true){
            bool update=false;
            for(int i=0;i<h;i++){
                for(int j=0;j<5;j++){
                    if(fld[i][j]==0)continue;
                    int cnt=Counter(i,j);
                    if(cnt<3)continue;
                    Point+=cnt*fld[i][j];
                    Deleter(i,j);
                    update=true;
                    //debug(h);
                }
            }
            Droper();
            if(update==false)break;
           // debug(h);
        }
        cout<<Point<<endl;
    }
}