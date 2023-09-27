#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
  int V,E,r;
  cin >> V >> E >> r;
  vector< vector< pair<int,int> > > v(V);
  int s,t,d;
  for(int i = 0; i < E; ++i){
    cin >> s >> t >> d;
    v[t].push_back(make_pair(s,d));
  }
  vector<int> M(V,20000010);
  M[r] = 0;
  int i;
  for(i = 0; i < V; ++i){
    int check = 0;
    for(int j = 0; j < V; ++j){
      int minimum = 20000010;
      for(size_t k = 0; k < v[j].size(); ++k){
	int another;
	if(M[v[j][k].first] == 20000010) another = 20000010;
	else another = M[v[j][k].first] + v[j][k].second;
	minimum = min(minimum, another);
      }
      minimum = min(minimum, M[j]);
      if(M[j] == minimum) check += 1;
      M[j] = minimum;
    }
    if(check == V) break;
  }
  if(i == V) cout << "NEGATIVE CYCLE" << endl;
  else{
    for(int j = 0; j < V; ++j){
      if(M[j] == 20000010) cout << "INF" <<endl;
      else cout << M[j] << endl;
    }
  }
  return 0;
}