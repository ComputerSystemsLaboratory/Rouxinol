#include<iostream>
#include<algorithm>
#include<utility>
#include<cmath>
#include<string>

using namespace std;

char map[101][101];
int a,b;

void dfs(int x,int y,char hoge){
    if(x>=a||x<0){
        return;
    }
    else if(y>=b||y<0){
        return;
    }
    
    if(map[x][y]== hoge){
        map[x][y]='x';
    }
    else{
        return;
    }
    
    dfs(x+1,y,hoge);
    dfs(x-1,y,hoge);
    dfs(x,y+1,hoge);
    dfs(x,y-1,hoge);
}

int main(){
    
    int ans = 0;
    
    while(cin>>a>>b){
        if(a==0&&b==0){
            return 0;
        }
        ans=0;
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin >> map[i][j];
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(map[i][j]!='x'){
                    dfs(i,j,map[i][j]);
                    ans+=1;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}