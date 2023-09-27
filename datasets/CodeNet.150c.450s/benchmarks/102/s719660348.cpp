#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
int A[30][30];
int x,y;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int dfs(int x,int y){
    A[x][y]=1;
    int ans=0;
    REP(i,4){
        int xx=dx[i]+x;
        int yy=dy[i]+y;
        if(A[xx][yy]==0){
           ans+=dfs(xx,yy);
        }
    }
    return ans+1;
}

int main(){
    int W,H;
    while(cin>>W>>H,W+H){
        REP(i,30){
            REP(j,30){
                A[i][j]=1;
            }
        }
        REP(i,H){
            string s;
            cin>>s;
            REP(j,W){
                if(s[j]=='.')A[i+1][j+1]=0;
                if(s[j]=='@'){
                   A[i+1][j+1]=0;
                   x=i+1;
                   y=j+1;
                }
            }
        }
        cout<<dfs(x,y)<<endl;
    }
    return 0;
}