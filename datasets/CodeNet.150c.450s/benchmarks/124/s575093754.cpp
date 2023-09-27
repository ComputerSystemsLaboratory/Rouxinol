#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#define INF 100000000
#define ll long long
using namespace std;
int main(){
  int n;
  cin >> n;
  vector< vector< pair<int,int> > > edges(n);
  for(int i = 0; i < n; i++){
    int id = 0;
    cin >> id;
    int k;
    cin >> k;
    for(int j = 0; j < k; j++){
      int v, c;
      cin >> v >> c;
      edges[id].push_back(make_pair(v,c));
    }
  }

  priority_queue< pair<int,int>, vector< pair<int,int> > , less< pair<int,int> > > pq;
  pq.push(make_pair(0,0));
  vector<long long> dist(n, INF);
  dist[0] = 0;
  while(!pq.empty()){
    ll source = pq.top().second;
    pq.pop();
    for(pair<int,int> edge: edges[source]){
      if(dist[edge.first] > dist[source] + edge.second){
	dist[edge.first] = dist[source] + edge.second;
	pq.push(make_pair(dist[edge.first], edge.first));
      }
    }
  }
  for(int i = 0; i < n; i++){
    cout << i << ' ';
    cout << dist[i] << endl;
  }
}