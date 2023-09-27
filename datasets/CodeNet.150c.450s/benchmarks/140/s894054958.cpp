#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<int,int> PA;
int main(){
  int v,e,s,t,w;
  vector<PA> vec[100001];
  scanf("%d %d",&v,&e);
  for(int i=0;i<e;i++){
    scanf("%d %d %d",&s,&t,&w);
    vec[s].push_back(PA(w,t));
    vec[t].push_back(PA(w,s));
  }
  priority_queue<PA,vector<PA>,greater<PA> > pq;
  pq.push(PA(0,0));
  bool g[100001]={false};
  int cnt = 0;
  while(!pq.empty()){
    PA pt = pq.top();
    pq.pop();
    if(g[pt.second]) continue;
    g[pt.second] = true;
    cnt += pt.first;
    for(int i=0;i<vec[pt.second].size();i++){
      pq.push(vec[pt.second][i]);
    }
  }
  printf("%d\n",cnt);
  return(0);
}

