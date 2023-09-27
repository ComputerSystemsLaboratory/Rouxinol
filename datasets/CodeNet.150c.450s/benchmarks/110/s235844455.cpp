#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int dy[]={-1,0,1,0};
int dx[]={0,-1,0,1};

int H,W,N;
char fld[1010][1010];


int sy,sx,gy,gx;
int dist[1010][1010];
int bfs(int s,int g){
    rep(i,H)rep(j,W){
        if(fld[i][j]==s+'0')sy=i,sx=j;
        if(fld[i][j]==g+'0')gy=i,gx=j;
    }
    fill_n(*dist,1010*1010,1001001001);
    dist[sy][sx]=0;

    queue<pint>que;que.push(pint(sy,sx));
    while(que.size()){
        int y,x;
        tie(y,x)=que.front();
        que.pop();
        rep(i,4){
            int ny=y+dy[i],nx=x+dx[i];
            if(ny<0||ny>=H||nx<0||nx>=W||fld[ny][nx]=='X'||dist[ny][nx]!=1001001001)continue;
            dist[ny][nx]=dist[y][x]+1;
            que.push(pint(ny,nx));
        }
    }

    return dist[gy][gx];
}

signed main(){
    scanf("%lld%lld%lld",&H,&W,&N);
    rep(i,H)rep(j,W){
        scanf(" %c",&fld[i][j]);
        if(fld[i][j]=='S')fld[i][j]='0';
    }

    int ans=0;
    rep(i,N)ans+=bfs(i,i+1);
    cout<<ans<<endl;
    return 0;
}