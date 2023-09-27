#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}

int dy[]={-1,0,1,0};
int dx[]={0,-1,0,1};
//-----------------------------------------------------------------------

int w,h;
char M[25][25];

int dfs(int y,int x)
{
    int res=1;
    M[y][x]='#';
    REP(i,4){
        int ny=y+dy[i],nx=x+dx[i];
        if(0<=ny && ny<h && 0<=nx && nx<w && M[ny][nx]=='.'){
            res+=dfs(ny,nx);
        }
    }
    return res;
}
int main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(cin>>w>>h,w|h)
    {   
        REP(i,h) cin>>M[i];
        REP(i,h) REP(j,w){
            if(M[i][j]=='@'){
                cout<<dfs(i,j)<<endl;
                i=h,j=w;
            }
        }
    }
}