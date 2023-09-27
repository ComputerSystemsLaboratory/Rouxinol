#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PA;
#define to first
#define cost second
int main(){
  int v,e,r,a,b,c;
  vector<PA> vec[2000];
  scanf("%d %d %d",&v,&e,&r);
  for(int i=0;i<e;i++){
    scanf("%d %d %d",&a,&b,&c);
    vec[a].push_back(PA(b,c));
  }
  int min_cost[1000];
  fill(min_cost,min_cost+1000,INT_MAX);
  min_cost[r] = 0;
  for(int i=0;i<e;i++){
    for(int j=0;j<e;j++){
      for(int k=0;k<vec[j].size();k++){
	PA d = vec[j][k];
	if(min_cost[j] == INT_MAX || min_cost[d.to] <= min_cost[j]+d.cost) continue;
	min_cost[d.to] = min_cost[j]+d.cost;
	if(i == e-1){
	  puts("NEGATIVE CYCLE");
	  return (0);
	}
      }
    }
  }
  for(int i=0;i<v;i++){
    if(min_cost[i] == INT_MAX) puts("INF");
    else printf("%d\n",min_cost[i]);
  }
  return (0);
}