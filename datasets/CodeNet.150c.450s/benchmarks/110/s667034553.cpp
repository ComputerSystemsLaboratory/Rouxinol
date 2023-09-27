#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999


int h,w,n;
string data[1100];

//void dfs(int y,int x,int fie[1100][1100],bool used[1100][1100],int dir){
//    fie[y][x]=dir;
//    int dx[]={0,1,0,-1};
//    int dy[]={1,0,1,-1};
//    rep(i,4){
//        int ddy=y+dy[i];
//        int ddx=x+dx[i];
//        if(ddy>=0 && ddy<h && ddx>=0 && ddx<w && fie[ddy][ddx]!='X' && !used[ddy][ddx]){
//            used[ddy][ddx]=true;
//            dfs(ddy,ddx,fie,used,dir+1);
//        }
//    }
//}

int main(){
    while(cin>>h>>w>>n){
        rep(i,h)cin>>data[i];
        
        pii ce[10];
        rep(i,h)rep(j,w){
            if(data[i][j]=='S'){
                ce[0]=pii(i,j);
            }
            if(isdigit(data[i][j])){
                ce[data[i][j]-'0']=pii(i,j);
            }
        }
        int sum=0;
        rep(i,n){
            int fie[1100][1100];
            rep(i,1100)rep(j,1100)fie[i][j]=INF;
            bool used[1100][1100]={};

            fie[ce[i].first][ce[i].second]=0;
            used[ce[i].first][ce[i].second]=true;
            queue<pii> que;
            que.push(ce[i]);
            while(que.size()){
                int y=que.front().first;
                int x=que.front().second;
                que.pop();
                int dx[]={0,1,0,-1};
                int dy[]={1,0,-1,0};
                rep(i,4){
                    int ddy=y+dy[i];
                    int ddx=x+dx[i];
                    if(ddy>=0 && ddy<h && ddx>=0 && ddx<w && data[ddy][ddx]!='X' && !used[ddy][ddx]){
                        used[ddy][ddx]=true;
                        fie[ddy][ddx]=fie[y][x]+1;
                        que.push(pii(ddy,ddx));
                    }
                }
            }
            
            
            sum+=fie[ce[i+1].first][ce[i+1].second];
        }
        cout<<sum<<endl;
    }
}