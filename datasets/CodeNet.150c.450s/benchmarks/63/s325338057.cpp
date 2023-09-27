#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PA;
#define to first
#define cost second
int main(){
  
  int a,b,c,d,e,f;
  vector<PA> vec[100001];
  queue<int> que;
  int min_cost[100001];
  fill(min_cost,min_cost+100001,INT_MAX);
  cin >> a >> b >> c;
  que.push(c);
  min_cost[c] = 0;
  
  for(int i=0;i<b;i++){
    cin >> d >> e >> f;
    vec[d].push_back(PA(e,f));
  }
  
  while(!que.empty()){
    int g = que.front();
    que.pop();
    for(int i=0;i<vec[g].size();i++){
      if(min_cost[vec[g][i].to] > min_cost[g]+vec[g][i].cost){
	min_cost[vec[g][i].to] = min_cost[g]+vec[g][i].cost;
	que.push(vec[g][i].to);
      }
    }
  }

  for(int i=0;i<a;i++){
    if(min_cost[i] != INT_MAX) cout << min_cost[i] << endl;
    else cout << "INF" << endl;
  }
  return (0);
}