#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}

int dy[]={-1,-1,-1,0,0,1,1,1};
int dx[]={-1,0,1,-1,1,-1,0,1};

//-----------------------------------------------------------------------

int w,h;
int M[55][55];

void dfs(int y,int x)
{
    M[y][x]=0;
    REP(i,8){
        int ny=y+dy[i],nx=x+dx[i];
        if(0<=ny && ny<h && 0<=nx && nx<w && M[ny][nx]) dfs(ny,nx);
    }
}   

int main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin>>w>>h,w|h)
    {
        REP(i,h) REP(j,w) cin>>M[i][j];

        int cnt=0;
        REP(i,h) REP(j,w){
            if(M[i][j]){
                cnt++;
                dfs(i,j);
            }
        }
        cout<<cnt<<endl;
    }
}