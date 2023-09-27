#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef tuple<int,int,int> tii;
typedef long long ll;
#define rep(i,s,n) for(int i=(int)(s);i<(int)(n);i++)

int N,M;
int pre[100010];
int dist[100010];
int INF = 200010;

vector<int> path[100010];
void bfs(){
  dist[1] = 0;
  pre[1] = 0;
  queue<int> que;
  que.push(1);
  while(!que.empty()){
    int q = que.front();que.pop();
    for(int i=0;i<path[q].size();i++){
      int nq = path[q][i];
      if(dist[nq]>dist[q]+1){
        dist[nq] = dist[q]+1;
        pre[nq] = q;
        que.push(nq);
      }
    }
    
  }
}

int main(){
  cin >> N >> M;
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    path[a].push_back(b);
    path[b].push_back(a);
  }  
  memset(dist,INF,sizeof(dist));
  bfs();
  cout << "Yes" << endl;
  for(int i=2;i<=N;i++){
    cout << pre[i] << endl;
  }
}