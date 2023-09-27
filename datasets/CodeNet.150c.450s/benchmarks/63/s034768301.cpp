#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>
using namespace std;
int main()
{
  int V,E,r,cur,curD,dij,dijD;
  cin >> V >> E >> r;
  vector<int> s(E),t(E),d(E),answer(V),check(V,0);
  vector< vector< pair<int,int> > > v(V);
  for(int i = 0;i < E;++i){
    cin >> s[i] >> t[i] >> d[i];
    v[s[i]].push_back(make_pair(d[i],t[i]));
  }
  check[r] = 1;
  queue<int> q;
  q.push(r);
  while(!q.empty()){
    for(int i = 0;i < v[q.front()].size();++i)
      if(check[v[q.front()][i].second] == 0){
	check[v[q.front()][i].second] = 1;
	q.push(v[q.front()][i].second);
      }
    q.pop();
  }
  vector<int> finish(V,0);
  priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > D;
  D.push(make_pair(0,r));
  while(!D.empty()){
    curD = D.top().first;
    cur = D.top().second;
    if(finish[cur] == 1){
      D.pop();
      continue;
    }
    finish[cur] = 1;
    answer[cur] = curD;
    D.pop();
    for(int i = 0;i < v[cur].size();++i){
      dijD = v[cur][i].first;
      dij = v[cur][i].second;
      if(finish[dij] == 0) D.push(make_pair(dijD + curD,dij)); 
    }
  }
  for(int i = 0;i < V;++i){
    if(check[i] == 0) cout << "INF" <<endl;
    else cout << answer[i] << endl;
  }
}