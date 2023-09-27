#include<bits/stdc++.h>
using namespace std;

int H,W;
char p[101][101];
char temp;
int dv[4]={1,0,-1,0},du[4]={0,1,0,-1};

void dfs(int v,int u){
    temp=p[v][u];
    p[v][u]='a';
    for(int i=0;i<4;i++){
        int nv=v+dv[i],nu=u+du[i];
        if(nv>=0&&nv<W&&nu>=0&&nu<H&&p[nv][nu]==temp){
            dfs(nv,nu);
        }
    }
}

void input(){
    cin >> H >> W;
    for(int u=0;u<H;u++){
        for(int v=0;v<W;v++){
            cin >> p[v][u]; //p[x][y]
        }
    }
}


int main(){
    while(1){
        int count=0;
        input();
        if(H==0&&W==0) break;
        for(int u=0;u<H;u++){
            for(int v=0;v<W;v++){
                if(p[v][u]!='a'){
                    dfs(v,u);
                    count++;
                }
            }
        }
    cout << count << endl;
    }
    return 0;
}