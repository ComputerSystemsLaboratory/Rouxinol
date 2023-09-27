#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> m;
int xv[]={1,1,1,0,-1,-1,-1,0},yv[]={1,0,-1,-1,-1,0,1,1};


void bfs(int x,int y){
    stack<pair<int,int>> stk;
    m[x][y]=0;
    for(int i=0;i<8;i++){
        if(m[x+xv[i]][y+yv[i]]){
            stk.push(make_pair(x+xv[i],y+yv[i]));
        }
    }
    while(!stk.empty()){
        pair<int,int> tg=stk.top();
        stk.pop();
        bfs(tg.first,tg.second);
    }
    
}


void solve(int c,int r){
    int in,ans=0;
    m=vector<vector<int>>(r+2,vector<int>(c+2,0));
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>in;
            m[i][j]=in;
        }
    }
    stack<pair<int,int>> stk;
    
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(m[i][j]){
                ans++;
                bfs(i,j);
            }
        }
    }
    
    cout<<ans<<endl;
}

int main(void){
    int a,b;
    while(cin>>a>>b,a){
        solve(a,b);
    }
}