#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const int N=11;

int mp[N][N];


int bfs(int n,int p){
  vector<int> time(n);
  queue<int> que;
  rep(i,n)time[i]=INF;
  time[p]=0;
  que.push(p);
  int u;
  while(!que.empty()){
    u=que.front(),que.pop();
    rep(i,n){
      if(time[i]>time[u]+mp[u][i]){
        time[i]=time[u]+mp[u][i];
        que.push(i);
      }
    }
  }
  int sum=0;
  rep(i,time.size())sum+=time[i];
  return sum;
}

signed main(){
  int n;
  while(cin>>n,n!=0){
    rep(i,N)rep(j,N)mp[i][j]=i==j?0:INF;
    int city[N]={};
    rep(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      mp[a][b]=mp[b][a]=c;
      city[a]++;
      city[b]++;
    }
    vector<int> d;
    rep(i,N)if(city[i]>0)d.pb(i);
    int e=d.size();
    int ans1,ans2=INF;
    rep(i,e){
      int temp=bfs(e,d[i]);
      if(ans2>temp){
        ans2=temp;
        ans1=i;
      }
    }
    cout<<ans1<<' '<<ans2<<endl;
  }
  return 0;
}