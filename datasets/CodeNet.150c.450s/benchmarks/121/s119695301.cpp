#include<iostream>  
#include<cstdio>  
#include<cstring>  
using namespace std;  
int n,m,ans;  
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};  
char ch;  
  
char map[111][111];  
  
void dfs(int x,int y)  
{  
    if(x<1||x>n||y<1||y>m) return ;  
    if(map[x][y]!=ch) return ;  
    map[x][y]='.';  
    for(int i=0;i<4;i++) {  
        dfs(x+dx[i],y+dy[i]);  
    }  
      
}  
  
  
int main()  
{  
    int i,j;  
    while(cin>>n>>m) {  
        if(n==0 && m==0 ) break;  
        for(i=1;i<=n;i++) {  
            for(j=1;j<=m;j++) cin>>map[i][j];  
        }  
        ans=0;  
        for(i=1;i<=n;i++) {  
            for(j=1;j<=m;j++){  
                if(map[i][j]=='.') continue;  
                ch=map[i][j];  
                dfs(i,j);  
                ans++;  
            }  
        }  
        cout<<ans<<endl;  
    }  
    return 0;  
}  
