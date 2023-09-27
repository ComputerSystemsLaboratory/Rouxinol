#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>
#include<set>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define P(p) cout<<(p)<<endl;
#define PP(p) cout<<(p)<<" ";
#define INF 1e18

typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;
//int dy[8]={1,1,1,0,-1,-1,-1,0};
//int dx[8]={-1,0,1,1,1,0,-1,-1};
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int N,M;
vi a,b;
#define MAX_V 100000

vi G[MAX_V];

vi depth;

void inputG(int a,int b){
    G[a].push_back(b);
    G[b].push_back(a);
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>N>>M;
    depth.resize(N,INF);
    a.resize(M+1);b.resize(M+1);
    rep(i,M){
        cin>>a[i]>>b[i];
        a[i]--;b[i]--;
        inputG(a[i],b[i]);
    }
    queue<int> que; //now
    que.push(0);
    depth[0]=0;
    while ((!que.empty())){
        int now = que.front();
        que.pop();
        rep(i,G[now].size()){
            int ni = G[now][i];
            if( depth[ni]> depth[now]+1){
                depth[ni] = depth[now]+1;
                que.push(ni);
            }
        }
    }
    vi ans;
    REP(i,1,N){
        bool f = false;
        rep(j,G[i].size()){
            if(depth[i]-1 == depth[G[i][j]]){
                ans.push_back(G[i][j]);
                f = true;
                break;
            }
        }
        if(!f){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    rep(i,ans.size()){
        cout<<ans[i]+1<<endl;
    }
    return 0;
}
