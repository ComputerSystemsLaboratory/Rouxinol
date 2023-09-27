#include <iostream>
#include <iomanip>
using namespace std;

const int H=100;
const int W=100;

bool checked[H+1][W+1];
char field[H+1][W+1];
int count;

bool is_in(int y,int x){
    return 0<=y && y<=H && 0<=x && x<=W;
}

void dfs(int old_y,int old_x,int y,int x){
    if(!is_in(y,x)) return;
    if(checked[y][x]) return;
    else if(field[old_y][old_x]==field[y][x]){
        checked[y][x]=true;
        dfs(y,x,y+1,x);
        dfs(y,x,y,x+1);
        dfs(y,x,y-1,x);
        dfs(y,x,y,x-1);
    }else{
        return;
    }
}

int main(){
    int h,w;
    char c;

    while(cin>>h>>w,h|w){
        int i,j;

        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                cin>>field[i][j];
                checked[i][j]=false;
            }
            field[i][j]=0;
        }

        for(j=0;j<=w;j++){
            field[h][j]=0;
            checked[h][j]=true;
        }

        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(checked[i][j]) continue;
                dfs(i,j,i,j);
                count++;
            }
        }

        cout<<count<<endl;

        count=0;
    }

    return 0;
}