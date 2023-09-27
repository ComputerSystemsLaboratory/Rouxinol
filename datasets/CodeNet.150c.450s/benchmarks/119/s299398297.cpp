 #include<bits/stdc++.h>
 using namespace std;
#define INF 1000000000
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
typedef long long LL;
int w,h;
int c[101][101];
int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,0,1,-1,0,1,-1};
void dfs(int x,int y){
     c[x][y]=0;
     REP(i,8){
         if(c[x+dx[i]][y+dy[i]]==1){
            dfs(x+dx[i],y+dy[i]);
         }
     }
}
int main(){
    while(cin>>w>>h,w,h){
    REP(i,h+1){
        REP(j,w+1){
            c[i][j]=0;
        }
    }
    REP(i,h){
        REP(j,w){
            cin>>c[i+1][j+1];
        }
    }
    int ans=0;
    REP(i,h+1){
        REP(j,w+1){
            if(c[i][j]==1){
               dfs(i,j);
               ans++;
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}